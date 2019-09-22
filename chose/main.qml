import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.XmlListModel 2.0
Window {
    visible: true
    id:root;
    width: 800
    height: 600
    title: qsTr("Hello World")
    color: "black";
    XmlListModel {
        id: model
        source: "./sources.xml"
        query: "/rss/channel/item"
        XmlRole { name: "name"; query: "name/string()" }
        XmlRole { name: "imageSource"; query: "imageSource/string()" }
    }


    GridView{
        id:view;
        width: 700
        height: 379
        anchors.left: parent.left;anchors.top: parent.top;
        property var num: -1;
        anchors.margins: 50;
        cellWidth:100;
        cellHeight:100;
        delegate: DeleGate{}
        model:model;

    }

    Rectangle {
        id: rectangle
        x: 227
        y: 380
        width: 261
        height: 116
        color: "#ffffff"
        radius: 43
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 31
        Image {
            anchors.fill: parent
            source: "http://ossweb-img.qq.com/images/tps/cp/a20150916newweapons/draw_btn.jpg"
        }
        MouseArea{
            anchors.fill: parent;
            onClicked: {
                time.interval=1;
                time.stopTime=Math.random()*2000;
                time.start();
            }
        }
    }
    Timer{
        id:time;
        interval: 5;
        property var stopTime;
        repeat: true;
        onTriggered: {
            //start.start();
            console.log(view.num++)
            view.num=(view.num++)%model.count;
            if(interval<100)interval+=3;
            else if(interval<300)interval+=20;
            else if(interval<500)interval+=40;
            else if(interval<1000)interval+=60;
            else if(interval<stopTime)interval+=100;
            else{
                time.stop();
            }
        }

    }
}
