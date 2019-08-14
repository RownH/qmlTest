import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 1.2


Rectangle{
    id:root;
    width:480;
    height: 300;
    color: "black";
    property var xmlhttp: null;
    function onResultReady(){
        if(xmlhttp.readyState==4){
            result.append("Status Code:%1\n\n Response Headers:".args(xmlhttp.status));
        }
    }
    function get(url){
        if(xmlhttp==null){
            xmlhttp=new XMLHttpRequest();
            xmlhttp.onreadystatechange=onResultReady;
        }

    }


            Text {
                id: result;
                anchors.margins: 4;
                anchors.bottom: parent.bottom;
                anchors.top:parent.top;
                anchors.left: parent.left;
                anchors.right: parent.right;

                color: "steelblue";

            }
            Text {
            id:searchClub;
            text: qsTr("URL:")
            font.pixelSize: 11;
            verticalAlignment: Text.AlignVCenter;
            height: 30;
            anchors.left: parent.left;
            //anchors.verticalCenter:
            color: "lightgray"
        }
        Rectangle{
            id:searchBox;
            z:2;
            border.width: 1;
            color: "black";
            anchors.bottom: parent.bottom;
            anchors.bottomMargin: 8;
            anchors.left: searchClub.right;
            anchors.right: parent.right;
            anchors.margins: 4;
            height: 40;
            TextInput{
                id:searchEdit;
                anchors.margins: 2;
                anchors.fill: parent;
                font.pixelSize: 13;
                verticalAlignment:Text.AlignVCenter;
                color: "white";
                activeFocusOnTab:true;
                onAccepted: root.get(text);
            }
        }
}
