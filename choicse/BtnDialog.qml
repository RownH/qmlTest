import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Layouts 1.1
Window {
   id: eo_askDialog
   width: 300
   height: 200
   modality: Qt.ApplicationModal
   property  var number;
   property  var color;
   signal goCheck();
   ColumnLayout{
       anchors.fill: parent
       anchors.verticalCenter: parent.verticalCenter
       anchors.horizontalCenter: parent.horizontalCenter
       spacing:2

       //标题栏
       Rectangle{
           id: titleBar
           Layout.fillWidth: parent
           implicitHeight: 30
           color: "darkgray"
       }

       //内容框
       Rectangle{
           id: contentView
           Layout.fillWidth: parent
           Layout.fillHeight: parent
           color: "lightgray"
           Text {
               text: "你选择为"+number.toString()
               font{
                    pixelSize: 25;
               }
           }
       }

       //按钮栏
       Rectangle{
           id: buttonBar
           Layout.fillWidth: parent
           implicitHeight: 35
           color: "darkgray"
           Rectangle{
            width: 100;
            height: parent.height-10;
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 5
            anchors.left: parent.left;
            anchors.leftMargin: 5

            radius: 5;
            Text {
                id: btn
                text: qsTr("去检测")
                anchors.horizontalCenter: parent.horizontalCenter
            }
            MouseArea{
                anchors.fill: parent;
                    onClicked: {
                        goCheck()
                    }

                }
           }
           Rectangle{
            width: 100;
            height: parent.height-10;
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 5
            anchors.right: parent.right;
            anchors.rightMargin: 5

            radius: 5;
            Text {
                id: cancle
                text: qsTr("重新选择")
                anchors.horizontalCenter: parent.horizontalCenter
            }
            MouseArea{
                anchors.fill: parent;
                    onClicked: {
                        btnDialog.hide()
                        timer.start()
                    }
                }
           }

       }
   }
}
