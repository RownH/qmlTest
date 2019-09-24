import QtQuick 2.12
import QtQuick.Window 2.12
import GameHistory 1.0
import GamePlayer 1.0
import QtQuick.Layouts 1.0
Window {
    GameHistory{
        id:gameHistory;


    }
    ListView{
        id:view;
        model:gameHistory.players;
        spacing: 100;
        delegate: Rectangle{
            RowLayout{
                Text {
                    text: name
                }
                Text {
                    text: grade
                }
            }
        }
    }
    Component.onCompleted: {
           // name.append("rownh",11);
            //console.log(name.loadHistory())
            console.log(gameHistory.playersCount())
        for (var i=0;i<gameHistory.playersCount();i++){
            console.log(gameHistory.playerAt(i).name,gameHistory.playerAt(i).grade);
        }

    }
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")
}
