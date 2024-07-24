import QtQuick 2.15
import QtQuick.Controls 2.15

Rectangle {
    id: root
    color: "gray"
    width: 100
    height: (root.width * 2) + (root.width * 0.01)

    property int counter: 0
    // Ustawienie koloru tła na szary
    Button {
        id: button
        x: 0
        y: 0
        width: root.width
        height: root.width
        background: Rectangle {
            id: buttonBackground
            color: "black"
        }
        contentItem: Text {
            color: "white"
            text: qsTr("+")
            font.pointSize: root.width - 60
            anchors.centerIn: parent // Wyśrodkowanie tekstu w przycisku
            anchors.verticalCenterOffset: -root.width + (root.width * 0.94) // Przesunięcie tekstu 5 pikseli do góry
            horizontalAlignment: Text.AlignHCenter // Wyśrodkowanie poziome tekstu
            verticalAlignment: Text.AlignVCenter // Wyśrodkowanie pionowe tekstu
        }

        SequentialAnimation {
            id: colorAnimation
            running: false

            ColorAnimation {
                target: buttonBackground
                property: "color"
                from: "black"
                to: "darkgray"
                duration: 100
            }
            ColorAnimation {
                target: buttonBackground
                property: "color"
                from: "darkgray"
                to: "black"
                duration: 100
            }
        }

        Connections {
            target: button
            onClicked: {
                console.log(counter++)
                scaleAnimation.start()
            }
        }
    }

    Button {
        id: button1
        x: 0
        y: root.width + (root.width / 100)
        width: root.width
        height: root.width
        background: Rectangle {
            id: buttonBackground1
            color: "black"
        }
        contentItem: Text {
            color: "white"
            text: qsTr("-")
            font.pointSize: root.width - 60
            anchors.centerIn: parent // Wyśrodkowanie tekstu w przycisku
            anchors.verticalCenterOffset: -root.width + (root.width * 0.93) // Przesunięcie tekstu 5 pikseli do góry
            horizontalAlignment: Text.AlignHCenter // Wyśrodkowanie poziome tekstu
            verticalAlignment: Text.AlignVCenter // Wyśrodkowanie pionowe tekstu
        }

        SequentialAnimation {
            id: colorAnimation2
            running: false

            ColorAnimation {
                target: buttonBackground1
                property: "color"
                from: "black"
                to: "darkgray"
                duration: 100
            }
            ColorAnimation {
                target: buttonBackground1
                property: "color"
                from: "darkgray"
                to: "black"
                duration: 100
            }
        }

        Connections {
            target: button1
            onClicked: {
                console.log(counter--)
                scaleAnimation2.start()
            }
        }
    }
}
