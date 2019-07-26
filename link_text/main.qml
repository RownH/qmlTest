import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    id:rootItem;
    Text {
        id: linkText;
        text: qsTr("i am web lik")
        anchors.centerIn: parent;
        font.pixelSize: 24
        property  var  hadClicked: false
        MouseArea{
            id:mousArea;
            anchors.fill: parent
            hoverEnabled: true;     //悬挂
            onEntered: {
                linkText.state=linkText.hadClicked==true?
                            "clickedHover":"hover";
            }
            onExited: {
                linkText.state=linkText.hadClicked==true?
                            "clicked":"initial"
            }
            onClicked: {
                if(linkText.hadClicked==false){
                    linkText.hadClicked=true;
                }
                linkText.state="clicked";
            }
        }
        states:[
            State {
                name: "initial"
                changes: [
                PropertyChanges {
                    target: linkText
                    color:"blue";
                }
                ]
            },
            State {
                name: "hover"
                PropertyChanges {
                    target: linkText
                    color:"#87cefa"
                    font{
                        italic:true;
                        pixelSize:36;
                        underline:true;
                    }
                }
            },
            State {
                name: "clicked"
                PropertyChanges {
                    target: linkText
                    color: "#87Cefa"
                    font {
                        color:"#8b4513";

                        pixelSize:24;

                    }
                }
            },
            State {
                name: "clickedHover"
                PropertyChanges {
                    target: linkText
                    color:"#D2691E"

                font{
                    italic:true;
                    pixelSize:36;
                    underline:true;
                    }
                }
            }

        ]
        state: "initial"
        transitions: [
            Transition {
                from: "initial"
                to: "hover"
                reversible: true;



                NumberAnimation {
                    property:"font.pixelSize"
                    duration:1000
                }
                ColorAnimation{
                    duration: 1000
                }
            }


        ]


    }
}
