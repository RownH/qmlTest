import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Layouts 1.1
import an.at.CModel 1.0
Window {
    visible: true
    width: 360;
    height: 400;
    color: "#eeeeee";
    Component{
        id:videoDelegate;
        Item{
            id:wrapper;
            width: parent.width;
            height: 120;
            MouseArea{
                anchors.fill: parent;
                onClicked: wrapper.ListView.view.currentIndex=index;
            }
            Image {
                id: poster;
                anchors.left: parent.left;
                anchors.top: parent.top;
                source: img;
                width: 80;
                height: 120;
                fillMode: Image.PreserveAspectFit;
            }
            ColumnLayout{
                anchors.left: poster.right;
                anchors.leftMargin: 4;
                anchors.right: wrapper.right;
                anchors.top: poster.top;
                height: parent.height;
                spacing: 2;
                Text {
                    Layout.fillWidth: true;
                    text: "<b>"+name+"</b>("+rating+","+playtimes+")";
                    color: wrapper.ListView.isCurrentItem?"blue":"black";
                    font.pixelSize: 18;
                    elide: Text.ElideRight;
                }
                Text {

                    Layout.fillWidth: true;
                    text:date;
                    color: wrapper.ListView.isCurrentItem?"blue":"black";
                    font.pixelSize: 18;
                    elide: Text.ElideRight;
                }
                Text {
                    Layout.fillWidth: true;
                    text: director_tag+":<font color=\"#0000aa\">"+director+"</font>";
                    color: wrapper.ListView.isCurrentItem?"blue":"black";
                    font.pixelSize: 18;
                    elide: Text.ElideRight;
                }
                Text {
                    Layout.fillWidth: true;
                    text: "<b>"+name+"</b>("+rating+","+playtimes+")";
                    color: wrapper.ListView.isCurrentItem?"blue":"black";
                    font.pixelSize: 18;
                    elide: Text.ElideRight;
                }

            }
        }
    }
}
