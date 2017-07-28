import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
import TestModel 1.0

ApplicationWindow {
    id: wimdow

    visible: true
    width: 360
    height: 555

    TestModel {
        id: dataModel
    }

    Column {
        anchors.margins: 10
        anchors.fill: parent
        spacing: 10

        ListView {
            id: view

            width: parent.width
            height: parent.height - button.height - parent.spacing
            spacing: 10
            model: dataModel
            clip: true

            delegate: Rectangle {
                width: view.width
                height: 40
                color: model.color

                Text {
                    anchors.centerIn: parent
                    renderType: Text.NativeRendering
                    text: model.text
                }
            }
        }

        Rectangle {
            id: button

            width: 100
            height: 40
            anchors.horizontalCenter: parent.horizontalCenter
            border {
                color: "black"
                width: 1
            }

            Text {
                anchors.centerIn: parent
                renderType: Text.NativeRendering
                text: "Add"
            }

            MouseArea {
                anchors.fill: parent
                onClicked: dataModel.add("rtd")
            }
        }
    }
}
