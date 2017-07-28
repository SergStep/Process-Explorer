import QtQuick 2.5
import QtQuick.Window 2.2
import QtQuick.Controls 1.0
import QtQuick.Layouts 1.1
import QtQuick.Dialogs 1.2
import TableModel 1.0
import QtQuick.Controls.Styles 1.1

ApplicationWindow
{
    visible: true
    title: "Process Explorer"
    width: 640
    height: 480

    TableModel {
        id: dataModel
    }

    menuBar: MenuBar
    {
        Menu
        {
            title: qsTr("&File")

            MenuItem
            {
                text: qsTr("&Search")
                onTriggered: search.visible = true

            }
            MenuSeparator {}
            MenuItem
            {
                text: qsTr("&Exit")
                onTriggered: Qt.quit()
            }
        }
    }

    ColumnLayout
    {
        spacing: 10

        anchors.fill: parent
        anchors.margins: 10

        TableView
        {
            Layout.fillWidth: true
            Layout.fillHeight: true
            id: view
            sortIndicatorVisible: true
            model: dataModel
            onSortIndicatorColumnChanged: model.sort(sortIndicatorColumn, sortIndicatorOrder)
            onSortIndicatorOrderChanged: model.sort(sortIndicatorColumn, sortIndicatorOrder)
            clip: true
            currentRow: 0

            TableViewColumn
            {
                width: 100
                title: qsTr("Process Name")
                role: "processName"
            }
            TableViewColumn
            {
                width: 100
                title: qsTr("Process Id")
                role: "processId"
            }
            TableViewColumn
            {
                width: 100
                title: qsTr("MEM")
                role: "mem"
            }
            TableViewColumn
            {
                width: 100
                title: qsTr("User Id")
                role: "userId"
            }
            TableViewColumn
            {
                width: 100
                title: qsTr("CPU")
                role: "cpu"
            }
            TableViewColumn
            {
                width: 100
                title: qsTr("Command Line")
                role: "commandLine"
            }

            onActivated:
            {
                selectCurrentVirtualMachine(model.get(row).Id)
            }

            onClicked:
            {
                selectCurrentVirtualMachine(model.get(row).Id)
            }

            onDoubleClicked:
            {
                selectCurrentVirtualMachine(model.get(row).Id)
                openCurrentVirtualMachine()
            }

            Timer
            {
                id: timer
                interval: 100000
                running: true
                repeat: true

                onTriggered:
                {
                    dataModel.Clean()
                    dataModel.Add()
                }
            }
        }

        RowLayout{
            spacing: 20
            anchors.margins: 10

            Rectangle {
                id: button

                width: 100
                height: 40
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
                    onClicked: dataModel.Add()
                }
            }

            Rectangle {
                id: button1

                width: 100
                height: 40
                border {
                    color: "black"
                    width: 1
                }

                Text {
                    anchors.centerIn: parent
                    renderType: Text.NativeRendering
                    text: "Clean"
                }

                MouseArea {
                    anchors.fill: parent
                    onClicked: dataModel.Clean()
                }
            }
        }
    }


    ApplicationWindow
    {
        id: search
        visible: false
        title: "Search"
        width: 640
        height: 480

        TableModel {
            id: dataModelSearch
        }

        ColumnLayout
        {
            spacing: 10

            anchors.fill: parent
            anchors.margins: 10

            TableView
            {
                Layout.fillWidth: true
                Layout.fillHeight: true
                id: viewSearch
                sortIndicatorVisible: true
                model: dataModelSearch
                onSortIndicatorColumnChanged: model.sort(sortIndicatorColumn, sortIndicatorOrder)
                onSortIndicatorOrderChanged: model.sort(sortIndicatorColumn, sortIndicatorOrder)
                clip: true
                currentRow: 0

                TableViewColumn
                {
                    width: 100
                    title: qsTr("Process Name")
                    role: "processName"
                }
                TableViewColumn
                {
                    width: 100
                    title: qsTr("Process Id")
                    role: "processId"
                }
                TableViewColumn
                {
                    width: 100
                    title: qsTr("MEM")
                    role: "mem"
                }
                TableViewColumn
                {
                    width: 100
                    title: qsTr("User Id")
                    role: "userId"
                }
                TableViewColumn
                {
                    width: 100
                    title: qsTr("CPU")
                    role: "cpu"
                }
                TableViewColumn
                {
                    width: 100
                    title: qsTr("Command Line")
                    role: "commandLine"
                }
            }

            RowLayout
            {
                spacing: 20
                anchors.margins: 10

                Rectangle
                {
                    id: buttonSearch

                    width: 100
                    height: 40
                    border
                    {
                        color: "black"
                        width: 1
                    }

                    Text
                    {
                        anchors.centerIn: parent
                        renderType: Text.NativeRendering
                        text: "Search"
                    }

                    MouseArea
                    {
                        anchors.fill: parent
                        onClicked: dataModelSearch.Search(textInput.text)
                    }
                }

                TextField
                {
                    id: textInput
                    text: ""
                    horizontalAlignment: TextInput.AlignHCenter
                    style: TextFieldStyle {
                        textColor: "black"
                        background: Rectangle {
                            radius: 20
                            color: "#F0EBEB"
                            implicitWidth: 100
                            implicitHeight: 24
                            border.color: "#000000"
                            border.width: 1
                        }
                    }
                }
            }
        }
    }
}
