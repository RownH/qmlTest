import QtQuick 2.0

Rectangle{
    width:150;
    height: 150;
    border.color: view.num==index?"red":"orange";
    border.width: 2;
    color:"black";
    radius: 10
    z:view.num==index?1:0;
    MouseArea{
        anchors.fill: parent;
        onClicked: {
            view.num=index;
        }
    }
    Rectangle{
        width: parent.width/5.0*3;
        height: parent.height/5.0*3;
        anchors.top: parent.top;
        anchors.left: parent.left;
        anchors.margins:parent.width/5.0
        Image {
            anchors.fill: parent;
            source: imageSource;
        }
        border.color: "red";
        border.width: 4;
    }

    Text {
        id: element
        x: 30
        y: 120
        width: 90
        height: 23
        text: title
        color: "white"
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignHCenter
        font.pixelSize: 12
    }
}
