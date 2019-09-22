import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 1.1
import QtQuick.Layouts 1.1
Window {
    visible: true
    width: 360
    height: 360
    color: "#eeeeee"
    Component{
        id:phoneDelegate;
        Item {
            id: wrapper;
            width: parent.width;
            height: 30;
            MouseArea{
                anchors.fill: parent
                onClicked: listView.currentIndex=index;

            }
            RowLayout{
                anchors.left: parent.left;
                anchors.verticalCenter: parent.verticalCenter;
                spacing: 8
                Text {
                    id: col1
                    text: name;
                    color:wrapper.ListView.isCurrentItem?"red":"black";
                    font.pixelSize: wrapper.isCurrentItem?22:18;
                    Layout.preferredWidth: 120;
                }
                Text
                {
                    text: cost;
                    color:wrapper.ListView.isCurrentItem?"red":"black"
                    font.pixelSize: wrapper.ListView.isCurrentItem?22:18
                    Layout.preferredWidth: 80;
                }
                Text {
                    text: manufacturer;
                    color:wrapper.ListView.isCurrentItem?"red":"black";
                    font.pixelSize: wrapper.ListView.isCUrrentItem?22 :18;
                    Layout.fillWidth: true
                }
            }
        }
    }
    Component{
        id:headerView
        Item {
            width: parent.width;
            height: 30;
            RowLayout{
                anchors.left: parent.left
                anchors.verticalCenter: parent.verticalCenter
                spacing: 8
                Text {
                    text: qsTr("Name")
                    font.bold: true;
                    font.pixelSize: 20;
                    Layout.preferredWidth: 120
                }
                Text {
                    text: qsTr("Cost")
                    font.bold: true
                    font.pixelSize: 20;
                    Layout.preferredWidth: 80;
                }
                Text {
                    text: qsTr("Manufacturer")
                    font.bold: true
                    font.pixelSize: 20
                    Layout.fillWidth: true;
                }


            }
        }
    }
    Component{
        id:footerView;
        /*
        Text {
            width: parent.width;
            font.italic: true;
            color: "blue";
            height: 30;
            verticalAlignment: Text.AlignVCenter
        }
        */

        Item {
            id:footerRootItem;
            width: parent.width;
            height: 30;
            property alias text: txt.text
            signal clean();
            Text {
                id:txt;
                anchors.left: parent.left;
                anchors.top: parent.top;
                anchors.bottom:parent.bottom;
                font.italic: true;
                color:"blue";
                verticalAlignment: Text.AlignHCenter
            }
            Button{
                anchors.right: parent.right;
                anchors.verticalCenter: parent.verticalCenter;
                text:"Clear";
                onClicked: {
                   footerRootItem.clean();
                }
            }

        }
    }
    Component{
        id:sectionHeader
        Rectangle{
            width: parent.width
            height: childrenRect.height
            color: "lightsteelblue"
            Text{
                text: section
                font.bold: true
                font.pixelSize:20
            }

        }


    }
    Component.onCompleted: {
        listView.footerItem.clean.connect(listView.model.clear)
    }
    ListView{
        id:listView;
        anchors.fill:parent;
        header: headerView
        footer:footerView;
        delegate: phoneDelegate;
        model: ListModel{
            id:phoneModel
            ListElement{
                name:"phone";
                cost:"1000";
                manufacturer:"apple"
            }
            ListElement{
                name:"phone";
                cost:"1000";
                manufacturer:"apple"
            }

            ListElement{
                name:"phone";
                cost:"1000";
                manufacturer:"apple"
            }
            ListElement{

                name:"Destop";
                cost:"500";
                manufacturer:"apaid"
            }
            ListElement{

                name:"Destop";
                cost:"500";
                manufacturer:"apaid"
            }         ListElement{

                name:"Destop";
                cost:"500";
                manufacturer:"apaid"
            }
        }
        focus: true;
        highlight: Rectangle{
            color: "lightblue";
        }
        section.property: "manufacturer";
        section.criteria: ViewSection.FullString
        section.delegate: sectionHeader
        onCurrentIndexChanged: {
            if(listView.currentIndex>=0){
                var data=listView.model.get((listView.currentIndex));
                listView.footerItem.text=data.name+","+data.cost+","+data.manufacturer;

            }else
            {
            listView.footerItem.text=""
         }


        }
    }
}
