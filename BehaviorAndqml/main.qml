import QtQuick 2.12
import QtQuick.Window 2.12
/*
    Behavior用来给一个property定义默认动画,当该property变化时执行该songhai.一个property只能绑定一个Behavoir,一个Behavior只能有一个顶层动画
    执行多个动画 需要parallelAnimation 或者SequentialAnimation
    //第五中动画定义的方式


*/
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")



}
