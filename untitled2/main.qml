import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5
import Reader 1.0
import QmlObject 1.0  //注册方式 两种
import "."
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
    TextArea{
        text: "            delegate.width=root.width-2/5*parent.width;\n                delegate.height=root.height-2/5.0*parent.height;\n                onExited: {            delegate.width=root.width-2/5*parent.width;\n                delegate.height=root.height-2/5.0*parent.height;\n                onExited: {            delegate.width=root.width-2/5*parent.width;\n                delegate.height=root.height-2/5.0*parent.height;\n                onExited: {            delegate.width=root.width-2/5*parent.width;\n                delegate.height=root.height-2/5.0*parent.height;\n                onExited: {            delegate.width=root.width-2/5*parent.width;\n                delegate.height=root.height-2/5.0*parent.height;\n                onExited: {            delegate.width=root.width-2/5*parent.width;\n                delegate.height=root.height-2/5.0*parent.height;\n                onExited: {            delegate.width=root.width-2/5*parent.width;\n                delegate.height=root.height-2/5.0*parent.height;\n                onExited: {            delegate.width=root.width-2/5*parent.width;\n                delegate.height=root.height-2/5.0*parent.height;\n                onExited: {            delegate.width=root.width-2/5*parent.width;\n                delegate.height=root.height-2/5.0*parent.height;\n                onExited: {            delegate.width=root.width-2/5*parent.width;\n                delegate.height=root.height-2/5.0*parent.height;\n                onExited: {            delegate.width=root.width-2/5*parent.width;\n                delegate.height=root.height-2/5.0*parent.height;\n                onExited: {"
        anchors.fill: parent;
    }

}
