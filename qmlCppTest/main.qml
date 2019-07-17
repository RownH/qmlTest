import QtQuick 2.2
import QtQuick.Controls 1.2
import an.qt.ColorMaker 1.0
Rectangle {
    width: 360;
    height: 360;
    Text {
        id: timeLabel
        anchors.left: parent.left
        anchors.leftMargin: 4
        anchors.top:parent.top
        anchors.topMargin: 4;
        font.pixelSize: 26;
    }

    ColorMarker{
        id:colorMarker;
      //  color:Qt.blue
    }
    Rectangle
    {
        id:colorRect;
        anchors.centerIn : parent
        width: 200
        height: 200
        color: "blue"

    }
    Button
    {
        id:start;
        text:"start";
        anchors.left: parent.left;
        anchors.leftMargin: 4;
        anchors.bottom: parent.bottom;
        anchors.bottomMargin: 4;
        onClicked:
           {
            colorMarker.start();
        }
    }
    Button
    {
        id:stop
        text:"stop"
        anchors.left: start.right
        anchors.leftMargin: 4;
        anchors.bottom:start.bottom;
        onClicked:
        {
            colorMarker.stop();
        }
    }
    function changeAlgorithm(button,algorithm)
    {

        switch(algorithm)
        {
        case 0:
            button.text="RandomRGB";
            break;
        case 1:
            button.text="RandRed";
            break;
        case 2:
            button.text="RandGreen";
            break;
        case 3:
            button.text="RandomBlue";
            break;
        case 4:
            button.text="LinearIncrease";
         break;
        }
    }
    Button
    {
        id:colorAlgorithm;
        text:"RandomRGB";
        anchors.left: stop.right;
        anchors.leftMargin: 4;
        anchors.bottom: start.bottom;
        onClicked:
        {
            var algorithm=(colorMarker.algorigthm()+1)%5;
            changeAlgorithm(colorAlgorithm,algorithm);
            colorMarker.setAlgorithm(algorithm);
        }
    }
    Button
    {
        id:quit;
        text:"quit";
        anchors.left: colorAlgorithm.right
        anchors.leftMargin: 4
        anchors.bottom: start.bottom
        onClicked:
        {
            Qt.quit();

        }
    }
    Component.onCompleted:
    {
        colorMarker.color=Qt.rgba(0,180,120,255);
        colorMarker.setAlgorithm(colorMarker.LinearIncrease);
        changeAlgorithm(colorAlgorithm,colorMarker.algorigthm());
    }
    Connections
    {
        target: colorMarker;
        onCurrentTime:
        {
            timeLabel.text=strTime;
            timeLabel.color=colorMarker.timeColor;
        }
    }
    Connections
    {
        target: colorMarker;
        onColorChanged:
        {
            colorRect.color=color;
        }
    }
}
