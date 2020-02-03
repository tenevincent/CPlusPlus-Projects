import QtQuick 2.12
import QtQuick.Controls 2.5

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    property date myDate: "2014-05-30"
    property string myString: "http://syncor.blogspot.com"
    property url    myUrl: "http://syncor.blogspot.com"




    menuBar: MenuBar {
        Menu {
            title: qsTr("File");

            MenuItem {
                text: qsTr("Exit");
                onTriggered: Qt.quit();
            }

            MenuItem{
                text: qsTr("Open");
                onTriggered: Qt.exit();
            }
        }
    }


    VerticalField{
        vFieldLabelId.text: "A new label"
        vFieldTextId.text: "1000.0"
    }




    Rectangle
    {
        width: textId.implicitWidth+15
        height: textId.implicitHeight+8
        color : "dodgerblue"
        anchors.centerIn:parent
        Text {
            id : textId
            text: myString
            anchors.centerIn: parent
            font.pixelSize: 24
        }
    }




}
