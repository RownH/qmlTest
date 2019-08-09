import QtQuick 2.2
import QtQuick.Window 2.0
import QtQuick.Controls 2.0
import QtMultimedia 5.0
Window {
    width: 320;
    height: 240;

    property var utilDate: new Date();

    function msecs2String(msecs){
        utilDate.setTime(msecs);
        return Qt.formatTime(utilDate,"mm::ss")
    }

    MediaPlayer{
        id:player;
        source: "http://fjdx.sc.chinaz.net/Files/DownLoad/sound1/201803/9889.mp3"
        onPositionChanged: {
            currentPlay.text=msecs2String(position)+process.sDuration;
        }
        onDurationChanged: {
            countPlay.text=" / "+msecs2String(duration)
        }
        onPlaybackStateChanged: {
            switch(playbackState)
            {
            case MediaPlayer.PlayingState:
                state.text="播放中";
                break;
            case MediaPlayer.PausedState:
                state.text="已暂停"
                break;
            case MediaPlayer.StoppedState:
                state.text="停止";
                break;
            }

        }
    }

    Text {

        id: state;
        anchors.left: cotroller.left;
        anchors.bottom: processBar.top;
        anchors.bottomMargin: 10
        text: qsTr("启动成功")
        font{
            pixelSize: 15
        }
    }

    ProgressBar{
        id:processBar;
        anchors.bottom:cotroller.top
        anchors.left: cotroller.left;
        anchors.right: cotroller.right
        from:0.0;
        to:1.0;
        value: player.position/player.duration


    }
    Row{
        id:process;
        anchors.right:  cotroller.right;
        anchors.bottom: processBar.top;
        anchors.bottomMargin: 10
        Text {
            id: currentPlay;
            text: qsTr("text")
            font{
                pixelSize: 15
            }
        }
        Text {
            id: countPlay;
            text: "/"+qsTr("text")

            font{
                pixelSize: 17
            }
        }
        property string sDuration;
    }
    Row{
        id:cotroller;
        anchors.bottom: parent.bottom;
        anchors.horizontalCenter: parent.horizontalCenter;
        anchors.bottomMargin: 4;

        spacing: 4;
        Rectangle{
            id:back;
            width: 50;
            height: 50;

            Image {
                width: 50;
                height: 50;
                anchors.fill: parent;
                source: "back.png"
            }
            MouseArea{
                anchors.fill: parent;
                onClicked: {
                    if(player.seekable)
                    {
                        player.seek(player.position-5000);
                    }
                }
            }
        }
        Rectangle{
            id:pause;
            width: 50;
            height: 50;

            Image {
                width: 50;
                height: 50;
                anchors.fill: parent;

                source: "pause.png"
            }
            MouseArea{
                anchors.fill: parent;
                onClicked: {
                    player.pause()
                }
            }
        }
        Rectangle{
            id:play;
            width: 50;
            height: 50;

            Image {
                width: 50;
                height: 50;
                anchors.fill: parent;
                source: "play.png"
            }
            MouseArea{
                anchors.fill: parent;
                onClicked: {
                    player.play();
                }
            }
        }
        Rectangle{
            id:stop;
            width: 50;
            height: 50;

            Image {
                width: 50;
                height: 50;
                anchors.fill: parent;
                source: "stop.png"
            }
            MouseArea{
                anchors.fill: parent;
                onClicked: {
                    player.stop()
                }
            }
        }
        Rectangle{
            id:accept;
            width: 50;
            height: 50;

            Image {
                width: 50;
                height: 50;
                anchors.fill: parent;
                source: "accept.png"
            }
            MouseArea{
                anchors.fill: parent;
                onClicked: {
                    if(player.seekable)
                    {
                        player.seek(player.position+5000);
                    }
                }
            }
        }
    }
}
