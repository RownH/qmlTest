import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 1.2
import QtQuick.Controls.Styles 1.2
import QtQuick.Dialogs 1.1
import QtQuick.Layouts 1.0
import QtMultimedia 5.0
ApplicationWindow {
    visible: true
    width: 480
    height: 360
    color: "#eeeeee"
    title: qsTr("文件查看器")
    id:root
    property var aboutDlg: null;
    property var colorDlg: null;
    property color  textColor: "green";
    property color textBackgroundColor: "black";
    //菜单栏
    menuBar: MenuBar{

        Menu{
            title: "文件";
            MenuItem{
                        iconSource: "./icon/txtFile.png"
                        action:Action{
                            id:textAction;
                            iconSource:"../icon/txtFile.png";
                            text:"文本文件"
                            onTriggered: {
                           /*
                                pass
                                打开文件选择器选择
                            */

                            fileDialog.selectedNameFilter=fileDialog.nameFilters[0];
                                fileDialog.open();
                            }
                        tooltip: qsTr("打开文本文件")
                        }
                    }

            MenuItem{
                        action: Action{
                            id:imageAction;
                            text: qsTr("图片");
                            iconSource: "./icon/imageFile.png"
                            onTriggered: {
                                /*
                                    打开jpg图片等格式

                                */
                                fileDialog.selectedNameFilter=fileDialog.nameFilters[1];
                                fileDialog.open();
                            }
                            tooltip: qsTr("打开JPG等格式图片")
                        }
                   }

            MenuItem{
                        action: Action{
                            id:videoAction;
                            iconSource: "./icon/videoFile.png";
                            text: qsTr("视频");
                            onTriggered: {
                                fileDialog.selectedNameFilter=fileDialog.nameFilters[2];
                                fileDialog.open();
                            }
                            tooltip: qsTr("打开TS,MKV,MP4等格式文件")
                        }
                  }

            MenuItem{
                        action: Action{
                            id:musicAction;
                            iconSource: "./icon/musicFile.png";
                            text: qsTr("音乐")
                            onTriggered: {
                                fileDialog.selectedNameFilter=fileDialog.nameFilters[3];
                                fileDialog.open();
                            }
                            tooltip: qsTr("打开mp3,wma等格式文件");
                        }
                  }

            MenuItem{
                        text: "退出";
                        onTriggered: Qt.quit();
                  }
        }
        Menu{
            title:qsTr("设置");
            MenuItem{
                action:Action{
                    id:textColorAction;
                    iconSource: "./icon/textColor.png"
                    text: "文件颜色";
                    onTriggered:{
                        root.selectColor(root.onTextBackgroundColorSelected);

                    }
                }
            }

            MenuItem{
                action: Action{
                    id:backgroundColorAction;
                    iconSource: "./icon/textBackGroundColor.png"
                    text: "文字背景颜色";
                    onTriggered: {
                        root.selectColor(onTextColorSelected);
                    }
                }
            }

            MenuItem{
                action: Action{
                    id:fontSizeAddAciton;
                    iconSource: "./icon/font_size_up.png";
                    text: "增大字体"
                    onTriggered : {
                        /*
                            字体大小改变
                        */
                        textView.font.pointSize+=1;
                    }

                }
            }
            MenuItem{
                action: Action{
                    id:fontSizeMinusAciton;
                    iconSource: "./icon/font_size_down.png";
                    text: "增大字体"
                    onTriggered : {
                        /*
                            字体大小改变
                        */
                        textView.font.pointSize-=1;
                    }
                }
            }
        }
        Menu{
            title: qsTr("帮助");
            MenuItem{
                text:qsTr("关于");
                onTriggered: {

                }
            }
            MenuItem{
                text:qsTr("访问作者博客");
                onTriggered: Qt.openUrlExternally("www.baidu.com")
            }
        }
    }

    //工具栏
    toolBar: ToolBar{
        RowLayout{
            ToolButton{
                action: textAction;
            }
            ToolButton{
                action: imageAction;
            }
            ToolButton{
                action: musicAction;
            }
            ToolButton{
                action: videoAction;
            }
            ToolButton{
                action: textColorAction;
            }
            ToolButton{
                action:backgroundColorAction;
            }
            ToolButton{
                action: fontSizeMinusAciton;
            }
            ToolButton{
                action: fontSizeAddAciton;
            }
        }

    }

    //状态烂
    statusBar: Rectangle{
        color: "lightgray";
        implicitHeight: 30;
        implicitWidth: parent.width;
        property alias text: status.text;
        Text {
            id: status;
            anchors.fill: parent;
            anchors.margins: 4;
            font.pixelSize: 12;
        }

    }

    Item {
        id: centralView;
        anchors.fill: parent;
        visible: true;
        property var current: null;
        BusyIndicator{
            id:busy;
            anchors.centerIn: parent;
            running: false;
            z:3;
        }
        Image{
            id:imageViewer;
            anchors.fill: parent;
            visible: false;
            asynchronous: true;
            fillMode: Image.PreserveAspectCrop;
            onStateChanged: {
                if(status==Image.Loading){
                    centralView.busy.running=true;
                }
                else if(status==Image.Ready){
                    centralView.busy.running=false;
                }
                else if(status==Image.Error){
                    centralView.busy.running=false;
                    centralView.statesBar.text="图片无法显示";
                }
            }
        }
        TextArea{
                id:textView;
                anchors.fill: parent;
                readOnly: true;
                visible: false;
                wrapMode: TextEdit.WordWrap;
                font.pixelSize: 12;
                style: TextAreaStyle{
                    backgroundColor: "white";
                    textColor: root.textColor;
                    selectionColor: "steelblue";
                    selectedTextColor: "#a00000";
                }
                property var xmlhttp: null;
                function onReadyStateChanged(){
                        if(xmlhttp.readyState==4){
                            textView.text=xmlhttp.responseText;
                            xmlhttp.abort();
                        }
                }
                function loadText(fileUrl){
                     if(xmlhttp==null){
                        xmlhttp=new XMLHttpRequest();
                         xmlhttp.onreadystatechang=onReadyStateChanged();
                     }
                     if(xmlhttp.readyState==0){
                        xmlhttp.open("GET",fileUrl);
                        xmlhttp.send(null);
                     }
                }
            }
        VideoOutput{
                id:videoOutput;
                anchors.fill: parent;
                visible: false;
                source: player;
                onVisibleChanged: {
                    playerState.visible=visible;
                    if(visible==false){
                        player.stop();
                    }
                }
                MouseArea{
                    anchors.fill: parent;
                    onClicked: {
                        switch(player.playbackState){
                        case MediaPlayer.PausedState:
                        case MediaPlayer.StoppedState:
                            player.play();
                            break;
                        case MediaPlayer.PlayingState:
                            player.pause();
                            break;
                        }
                    }
                }
            }
        Rectangle{
                id:playerState;
                color: "gray";
                radius: 16;
                opacity: 0.8;
                visible: false;
                z:2;
                implicitHeight: 80;
                implicitWidth: 200;
                anchors.horizontalCenter: parent.horizontalCenter;
                anchors.bottom: parent.bottom;
                anchors.bottomMargin: 16;
                Column{
                    anchors.fill: parent;
                    anchors.leftMargin: 12;
                    anchors.rightMargin: 12;
                    anchors.topMargin: 6;
                    anchors.bottomMargin: 6;
                    spacing: 4;
                    Text {
                        id: state;
                        font.pointSize: 14;
                        color: "blue";
                    }
                    Text {
                        id: progress;
                        font.pixelSize: 12;
                        color: "white";
                    }
                }
            }
        MediaPlayer{

                id:player;
                property var utilDate: new Date();
                function msecs2String(msecs){
                    utilDate.setTime(msecs);
                    return Qt.formatTime(utilDate,"mm:ss");
                }
                property var sDuration;
                onPositionChanged: {
                    progress.text=msecs2String(position)+sDuration;
                }
                onDurationChanged: {
                    sDuration=" / "+msecs2String(duration);

                }
                onPlaybackStateChanged: {
                    switch(playbackState){
                        case MediaPlayer.PlayingState:
                            state.text="播放中";
                            break;
                        case MediaPlayer.PausedState:
                            state.text="已暂停";
                            break;
                        case MediaPlayer.StoppedState:
                            state.text="停止";
                            break;
                    }
                    onStatusChanged:{
                            switch(status){
                            case MediaPlayer.Loading:
                            case MediaPlayer.Buffering:
                                busy.running=true;
                                break;
                            case MediaPlayer.InvalidMedia:
                                root.statusBar.text="无法播放";
                            case MediaPlayer.Buffered:
                            case MediaPlayer.Loaded:
                                busy.running=false;
                                break;

                            }
                    }
                }
            }
      }
            function processFile(fileUrl,ext){
                   var i=0;
                for(;i<4;i++){
                    if(fileDialog.nameFilters[i].search(ext)!=-1){
                        break;
                    }
                }

                switch(i){
                case 0:
                    if(centralView.current!=textView){
                        if(centralView.current!=null){
                           centralView.current.visible=false;
                        }
                        textView.visible=true;
                        centralView.current=textView;
                    }
                    textView.loadText(fileUrl);
                    break;
                case 1:
                    if(centralView.current!=imageViewer){
                        if(centralView.current!=null){
                            centralView.current.visible=false;
                        }
                        imageViewer.visible=true;
                        centralView.current=imageViewer;
                    }
                    imageViewer.source=fileUrl;
                    break;
                case 2:
                case 3:
                        if(centralView.current!=videoOutput){
                            if(centralView.current!=null){
                                centralView.current.visible=false;
                            }
                            videoOutput.visible=true;
                            centralView.current=videoOutput;
                        }
                        player.source=fileUrl;
                        player.play();
                        break;
               default:
                   statusBar.text="抱歉!,处理不了";
                   break;
                }




            }
            function showAbout(){
                if(aboutDlg==null){
                    aboutDlg=Qt.createQmlObject('import QtQuick 2.0;import QtQuick.Dialogs 1.1; MessageDialog{icon=StandardIcon.Information;title:"关于";\ntext:仅仅时个例子";\nstandardButtons:StandardButton.Ok;}',root,"aboutDlg");
                    aboutDlg.accepted.connect(onAboutDlgClosed);
                    aboutDlg.rejected.connect(onAboutDlgClosed);
                    aboutDlg.visible=true;
                }
            }
            function selectColor(func){
                if(colorDlg==null){
                    colorDlg=Qt.createQmlObject(
                                'import QtQuick 2.2;
                                 import QtQuick.Dialogs 1.1;
                                 colorDilog{}
                                 ',root,"colorDlg"
                                )
                    colorDlg.accepted.connect(func);
                    colorDlg.accepted.connect(onColorDlgClosed);
                    colorDlg.accepted.rejected.connect(onColorDlgClosed)
                    colorDlg.rejected.connect(onColorDlgClosed)
                    colorDlg.visible=true;
                }

            }
            function onAboutDlgClosed(){
                aboutDlg.destroy();
                aboutDlg=null;
            }
            function onColorDlgClosed(){
                colorDlg.destroy();
                colorDlg=null;
            }
            function onTextColorSelected(){
                root.textColor=colorDlg.color;
            }
            function onTextBackgroundColorSelected(){
                root.textBackgroundColor=colorDlg.color;
            }
            FileDialog{
                id:fileDialog;
                title:qsTr("Please choose an image file");
                nameFilters: [
                    "Text Files (*.text *.ini *.c *.h *.java *.cpp *.html *.xml)",
                    "Image Files(*.jpg *.png *.gif *.bmp *.ico)",
                    "Video FIles(*.ts *.mp4 *.avi *.flv *.mkv *.3gp)",
                    "Audio FIles(*.mp3 *.ogg *.wav *.wma *.ape *.ra)",
                    "*.*"
                ];
                onAccepted: {
                    var filepath=new String(fileUrl);
                    if(Qt.platform.os=="windows"){
                        root.statusBar.text=filepath.slice(8);
                    }
                    else{
                        root.statusBar.text=filepath.slice(7);
                    }
                    var dot=filepath.lastIndexOf(".");
                    var sep=filepath.lastIndexOf("/");
                    if(dot>sep){
                        var ext=filepath.substring(dot);
                        root.processFile(fileUrl,ext.toLowerCase());
                    }
                    else{
                        root.statusBar.text="not support";
                    }

                }
            }

}
