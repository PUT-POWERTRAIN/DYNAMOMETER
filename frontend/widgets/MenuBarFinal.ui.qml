
/*
This is a UI file (.ui.qml) that is intended to be edited in Qt Design Studio only.
It is supposed to be strictly declarative and only uses a subset of QML. If you edit
this file manually, you might introduce QML code that is not supported by Qt Design Studio.
Check out https://doc.qt.io/qtcreator/creator-quick-ui-forms.html for details on .ui.qml files.
*/
import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Studio.Components

Rectangle {
    id: root
    width: 1000
    height: 75
    color: "#303030"

    property color buttonDefaultColor
    buttonDefaultColor: "#232323"
    property color buttonHoveredColor
    buttonHoveredColor: "#403e3e"

    Button {
        id: overviewButton
        anchors.left: parent.left
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        anchors.leftMargin: 0
        anchors.topMargin: 0
        anchors.bottomMargin: 0
        checkable: true
        display: AbstractButton.IconOnly
        width: parent.width / 5
        background: Rectangle {
            id: overviewButtonBack
            color: "#232323"
        }
        contentItem: Row {
            id: overviewContent
            anchors.fill: parent
            spacing: 0 // Odstęp pomiędzy ikoną a tekstem
            IconImage {
                id: overviewButtonIcon
                height: parent.height
                source: "../speedometer.png" // Ścieżka do ikony
                color: "#ffffff"
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: parent.top
                anchors.bottom: parent.bottom
                anchors.rightMargin: 100
                anchors.bottomMargin: 0
            }
            Text {
                id: overviewButtonText
                color: "#ffffff"
                text: "Overview"
                anchors.fill: parent
                font.pointSize: 10
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
            }
        }
    }

    Button {
        id: controlButton
        width: parent.width / 5
        anchors.left: parent.left
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        anchors.leftMargin: parent.width / 5
        anchors.topMargin: 0
        anchors.bottomMargin: 0
        checkable: true
        background: Rectangle {
            id: controlButtonBack
            color: "#232323"
        }
        contentItem: Row {
            id: controlButtonContent
            anchors.fill: parent
            spacing: 0 // Odstęp pomiędzy ikoną a tekstem
            IconImage {
                id: controlButtonIcon
                height: parent.height
                source: "../settings (2).png" // Ścieżka do ikony
                color: "#ffffff"
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: parent.top
                anchors.bottom: parent.bottom
                anchors.rightMargin: 100
                anchors.bottomMargin: 0
            }
            Text {
                id: controlButtonText
                color: "#ffffff"
                text: "Control"
                anchors.fill: parent
                font.pointSize: 10
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
            }
        }
    }
    Button {
        id: dataButton
        width: parent.width / 5
        anchors.left: parent.left
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        anchors.leftMargin: parent.width / 5 + width
        anchors.topMargin: 0
        anchors.bottomMargin: 0
        checkable: true
        background: Rectangle {
            id: dataButtonBack
            color: "#232323"
        }
        contentItem: Row {
            id: dataButtonContent
            anchors.fill: parent
            spacing: 0 // Odstęp pomiędzy ikoną a tekstem
            IconImage {
                id: dataButtonIcon
                height: parent.height
                source: "../data.png" // Ścieżka do ikony
                color: "#ffffff"
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: parent.top
                anchors.bottom: parent.bottom
                anchors.rightMargin: 100
                anchors.bottomMargin: 0
            }
            Text {
                id: dataButtonText
                color: "#ffffff"
                text: "Data"
                anchors.fill: parent
                font.pointSize: 10
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
            }
        }
    }

    Button {
        id: studyButton
        width: parent.width / 5
        text: qsTr("Button")
        anchors.left: parent.left
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        anchors.leftMargin: parent.width / 5 + 2 * width
        anchors.topMargin: 0
        anchors.bottomMargin: 0
        checkable: true
        background: Rectangle {
            id: studyButtonBack
            color: "#232323"
        }
        contentItem: Row {
            id: studyButtonContent
            anchors.fill: parent
            spacing: 0 // Odstęp pomiędzy ikoną a tekstem
            IconImage {
                id: studyButtonIcon
                height: parent.height
                source: "../analisys (4).png"
                sourceSize.width: 32
                sourceSize.height: 32 // Ścieżka do ikony
                color: "#ffffff"
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: parent.top
                anchors.bottom: parent.bottom
                anchors.rightMargin: 100
                anchors.bottomMargin: 0
            }
            Text {
                id: studyButtonText
                color: "#ffffff"
                text: "Study"
                anchors.fill: parent
                font.pointSize: 10
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
            }
        }
    }

    Button {
        id: settingsButton
        width: parent.width / 5
        anchors.left: parent.left
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        anchors.leftMargin: parent.width / 5 + 3 * width
        anchors.topMargin: 0
        anchors.bottomMargin: 0
        checkable: true
        background: Rectangle {
            id: settingsButtonBack
            color: "#232323"
        }
        contentItem: Row {
            id: settingsButtonContent
            anchors.fill: parent
            spacing: 0 // Odstęp pomiędzy ikoną a tekstem
            IconImage {
                id: settingsButtonIcon
                height: parent.height
                source: "../setting.png"
                sourceSize.width: 32
                sourceSize.height: 32 // Ścieżka do ikony
                color: "#ffffff"
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: parent.top
                anchors.bottom: parent.bottom
                anchors.rightMargin: 100
                anchors.bottomMargin: 0
            }
            Text {
                id: settingsButtonText
                color: "#ffffff"
                text: "Settings"
                anchors.fill: parent
                font.pointSize: 10
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
            }
        }
    }

    Rectangle {
        id: rectangle
        color: "#00ffffff"
        border.color: "#434343"
        anchors.fill: parent
        enabled: false
        clip: false
    }

    Item {
        id: __materialLibrary__
    }
    states: [
        State {
            name: "State2"
            when: overviewButton.pressed

            PropertyChanges {
                target: overviewButtonBack
                color: buttonDefaultColor
            }
        },

        State {
            name: "State4"
            when: controlButton.pressed

            PropertyChanges {
                target: controlButtonBack
                color: buttonDefaultColor
            }
        },

        State {
            name: "State6"
            when: dataButton.pressed

            PropertyChanges {
                target: dataButtonBack
                color: buttonDefaultColor
            }
        },

        State {
            name: "State8"
            when: studyButton.pressed

            PropertyChanges {
                target: studyButtonBack
                color: buttonDefaultColor
            }
        },

        State {
            name: "State10"
            when: settingsButton.pressed

            PropertyChanges {
                target: settingsButtonBack
                color: buttonDefaultColor
            }
        },

        State {
            name: "State1"
            when: overviewButton.hovered

            PropertyChanges {
                target: overviewButtonBack
                color: buttonHoveredColor
            }
        },
        State {
            name: "State3"
            when: controlButton.hovered

            PropertyChanges {
                target: controlButtonBack
                color: buttonHoveredColor
            }
        },
        State {
            name: "State5"
            when: dataButton.hovered

            PropertyChanges {
                target: dataButtonBack
                color: buttonHoveredColor
            }
        },
        State {
            name: "State7"
            when: studyButton.hovered

            PropertyChanges {
                target: studyButtonBack
                color: buttonHoveredColor
            }
        },
        State {
            name: "State9"
            when: settingsButton.hovered

            PropertyChanges {
                target: settingsButtonBack
                color: buttonHoveredColor
            }
        }
    ]
}

/*##^##
Designer {
    D{i:0;formeditorColor:"#00000c"}
}
##^##*/

