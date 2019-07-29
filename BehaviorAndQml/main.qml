import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    id:rootItem;
    Rectangle{
        id:rect;
        width: 160;
        height: 100;
        color: "red";
        anchors.centerIn: parent;
        Behavior on width {
                NumberAnimation{
                    duration: 1000;
                    easing.type: Easing.InBounce
                }
            }
        }

        MouseArea{
            anchors.fill: parent
            onClicked: {
                rect.width=Math.random()*rootItem.width;

            }
        }

    }


