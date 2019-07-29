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
    ListView{
        id:listView;
        anchors.fill:parent;

        delegate: phoneDelegate;
        model: ListModel{
            id:phoneModel
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

        }
        focus: true;
        highlight: Rectangle{
            color: "lightblue";
        }
    }


}
