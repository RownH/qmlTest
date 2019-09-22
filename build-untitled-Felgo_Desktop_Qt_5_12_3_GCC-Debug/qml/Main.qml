import Felgo 3.0

import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Layouts 1.1
App {
    // You get free licenseKeys from https://felgo.com/licenseKey
    // With a licenseKey you can:
    //  * Publish your games & apps for the app stores
    //  * Remove the Felgo Splash Screen or set a custom one (available with the Pro Licenses)
    //  * Add plugins to monetize, analyze & improve your apps (available with the Pro Licenses)
    //licenseKey: "<generate one from https://felgo.com/licenseKey>"
    property var number;
    property var color;
    property int nums:5;
    NavigationStack {

        Page {
                id:root;
                title: qsTr("Hello World")

                Rectangle{

                    width: parent.width;
                    height: 150;
                    radius: 50;
                    color: "#FFE4E1"
                    Text {
                        id: title
                        text: qsTr("丰县质检站")
                        width: 100;
                        height: 50
                        anchors.verticalCenter: parent.verticalCenter;
                        anchors.horizontalCenter: parent.horizontalCenter;
                        anchors.horizontalCenterOffset: -50
                        font {
                            pixelSize: 50;
                            family: "Times";
                        }
                    }
                }
                Rectangle{
                    id:box;
                    color: "green";
                    width: 100;
                    height: 100;
                    radius: 50;

                    Text {
                        id: number
                        text: Math.ceil((Math.random(0)*100))
                        font{
                            pixelSize: 17
                        }
                        color:"gray";
                        anchors.centerIn: parent
                    }
                    anchors.bottom: parent.bottom;
                    anchors.bottomMargin: 20
                    anchors.left: parent.left;
                    anchors.leftMargin: 20
                    MouseArea{
                        anchors.fill: parent
                        onPressed: {
                            if(timer.running==true)
                            {
                            timer.interval=100;
                            }
                         }
                        onReleased: {
                            if(timer.running==true)
                            {
                            timer.interval=1000;
                            timer.stop()
                            btnDialog.color=box.color;
                            btnDialog.number=number.text;
                            btnDialog.show()
                            }
                        }
                    }
                }
                Timer{
                    id: timer;
                    repeat: true;
                    interval: 1000;
                    running: true;
                    onTriggered: {
                        number.text= Math.ceil((Math.random(0)*100));
                        box.color=Qt.rgba(Math.random(255),Math.random(255),Math.random(255))

                    }
                }
                Rectangle{
                    id:saveRect;
                    width: 200;
                    height: 200;
                    anchors.right: parent.right;
                    anchors.rightMargin: 60;
                    anchors.bottom: parent.bottom;
                    anchors.bottomMargin: 50
                    border.color: "#ff9966"


                    ListModel{
                             id:model;

                        }
                    Component{
                        id: numberDelegate;
                        Rectangle{
                         id:wrapper;
                         radius: gridview.cellWidth/2
                         width:gridview.cellWidth
                         height: gridview.cellHeight
                         color: col
                         anchors.leftMargin: 15
                         anchors.rightMargin: 15
                         anchors.topMargin : 15
                         anchors.bottomMargin: 15
                         Text {
                                anchors.centerIn: parent;
                                font.pixelSize: 10;
                                text: number;
                                color: "white";

                               }
                        }
                    }

                    GridView{
                        id:gridview
                        cellWidth: 50;//设置项大小
                        cellHeight: 50;

                        anchors.fill: parent;
                        anchors.margins: 15;
                        anchors.bottomMargin: 15;
                        model: model;
                        delegate: numberDelegate;
                    }
                }
                Rectangle{
                    width: saveRect.width/2;
                    height: 100;
                    anchors.top: saveRect.bottom
                    anchors.bottom: parent.bottom;
                    anchors.right: saveRect.right

                    anchors.margins: 10
                    border.color: "black"
                    Text {
                        id: rel
                        text: qsTr("当前剩余可抽"+nums+"个");
                    }
                }
                BtnDialog{
                    id:btnDialog;
                    color:"white";
                    x:50
                    y:100
                    number: 0
                    onGoCheck: {
                        var newOne={"col":color.toString(),"number":number.text};
                        model.append(newOne)
                        nums-=1;
                        btnDialog.close()
                        if(nums!=0)
                        {
                            timer.start()
                        }
                    }
                }


        }

    }
}
