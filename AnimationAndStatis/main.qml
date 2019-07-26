import QtQuick 2.12
import QtQuick.Window 2.12
/*
    Transition {
    from: "fromState"  从什么状态来
    to: "toState"       到什么状态去  如果不设置from 和to 将 不管状态从什么到什么bianca 都会执行
    running   为ture时 表示正在运行
    enable     表示是否使能
    reversible 是否自动反转


}


*/
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    Rectangle{
        id:rect;
        color:"gray"
        width: 50;
        height: 50;
        anchors.centerIn: parent;
        MouseArea{
            id :mousArea;
            anchors.fill:parent;
        }
        states:
            State {
                name: "pressed"
                when: mousArea.pressed
                PropertyChanges {
                    target: rect
                    color:"red"
                    scale: "2.0"

                }
            }
        transitions: Transition {
            from: "*"
            to: "pressed"
            reversible: true;
            SequentialAnimation{        //默认时并发执行,显示指定顺序
                NumberAnimation{
                    property: "scale"
                    easing.type: Easing.InOutBack
                    duration: 2000
                }

                ColorAnimation {
                    from:"green"
                    to:"red"
                    duration: 2000
                }
                RotationAnimation{
                    target: rect
                    from :0
                    to:360
                    duration: 2000

                }
            }
        }

    }
}
