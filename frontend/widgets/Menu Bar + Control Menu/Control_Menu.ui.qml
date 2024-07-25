

/*
This is a UI file (.ui.qml) that is intended to be edited in Qt Design Studio only.
It is supposed to be strictly declarative and only uses a subset of QML. If you edit
this file manually, you might introduce QML code that is not supported by Qt Design Studio.
Check out https://doc.qt.io/qtcreator/creator-quick-ui-forms.html for details on .ui.qml files.
*/
import QtQuick 2.15
import QtQuick.Controls 2.15

Rectangle {
    id: item1
    width: 480
    height: 480
    color: "#65000000"


    Button {
        id: button_razem
        x: 89
        y: 387
        width: 140
        height: 68
        text: qsTr("Razem")
        checkable: true
        checked: false
        background: Rectangle {
            id: razemButtonBack
            color: "#232323"
        }
        contentItem:
            Text {
                id:razemButtonText
                color: "#ffffff"
                text: "Razem"
                anchors.fill: parent
                font.pointSize: 10
                horizontalAlignment: Text.AlignHCenter
                verticalAlignment: Text.AlignVCenter
            }
    }

    Button {
        id: button_osobno
        x: 257
        y: 387
        width: 140
        height: 68
        text: qsTr("Osobno")
        checkable: true
        checked: false
        background: Rectangle {
            id: osobnoButtonBack
            color: "#232323"
        }
        contentItem:
        Text {
            id:osobnoButtonText
            color: "#ffffff"
            text: "Osobno"

            anchors.fill: parent
            font.pointSize: 10
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
        }
    }

    Rectangle {
        x: 38
        y: 169
        width: slider2.width
        height: slider2.height
        rotation: 270
        color: "Light Gray"
        Slider {
            id: slider4
            x: 0
            y: 0
            value: 0
            enabled: false
            //rotation: 270
        }
    }

    Rectangle {
        x: 98
        y: 169
        width: slider2.width
        height: slider2.height
        rotation: 270
        color: "Light Gray"
        Slider {
            id: slider1
            x: 0
            y: 0
            value: 0
            enabled: false
            //rotation: 270

        }
    }

    Rectangle {
        x: 157
        y: 169
        width: slider2.width
        height: slider2.height
        rotation: 270
        color: "Light Gray"
        Slider {
            id: slider2
            x: 0
            y: 0
            value: 0
            enabled: false
            //rotation: 270
        }
    }


    Rectangle {
        x: 219
        y: 169
        width: slider2.width
        height: slider2.height
        rotation: 270
        color: "Light Gray"
        Slider {
            id: slider3
            x: 0
            y: 0
            value: 0
            enabled: false
            //rotation: 270
        }
    }

    states: [


        State {
            name: "Osobno_checked"
            when: button_osobno.checked

            PropertyChanges {
                target: slider4
                enabled: true
                value: 0
            }

            PropertyChanges {
                target: slider1
                enabled: true
                value: 0
            }

            PropertyChanges {
                target: slider2
                enabled: true
                value: 0
            }

            PropertyChanges {
                target: slider3
                enabled: true
                value: 0
            }

            PropertyChanges {
                target: button_razem
                checkable: false
            }
            PropertyChanges {
                target: osobnoButtonBack
                color: "#000000"
            }
        },

        State {
            name: "Razem_checked"
            when: button_razem.checked

            /// PropertyChanges {
            //    target: button_razem
            //     text: qsTr("Razem")
            //      checkable: true
            //     scale: 1
            //   }

            PropertyChanges {
                target: slider1
                value: slider4.value
                enabled: false
            }

            PropertyChanges {
                target: slider2
                value: slider4.value
                enabled: false
            }

            PropertyChanges {
                target: slider3
                value: slider4.value
                enabled: false
            }

            PropertyChanges {
                target: slider4
                value: slider4.value
                enabled: true
            }

            PropertyChanges {
                target: button_osobno
                checkable: false
            }
            PropertyChanges {
                target: razemButtonBack
                color: "#000000"
            }
        }
        ,           State {
            name: "State1"
            when: button_razem.hovered

            PropertyChanges {
                target: razemButtonBack
                color: "#2c2b2b"
            }
        },

          State {
            name: "Osobno_hover"
            when: button_osobno.hovered

            PropertyChanges {
                target: osobnoButtonBack
                color: "#2c2b2b"
            }
        },

           State {
            name: "Razem_unchecked"
            when: !button_razem.checked
            PropertyChanges {
                target: slider4
                value: 0
            }
            PropertyChanges {
                target: slider1
                value: 0
            }
            PropertyChanges {
                target: slider2
                value: 0
            }
            PropertyChanges {
                target: slider3
                value: 0
            }
        }
        ,

        State {
            name: "Osobno_unchecked"
            when: !button_osobno.checked
            PropertyChanges {
                target: slider4
                value: 0
            }
            PropertyChanges {
                target: slider1
                value: 0
            }
            PropertyChanges {
                target: slider2
                value: 0
            }
            PropertyChanges {
                target: slider3
                value: 0
            }

            PropertyChanges {
                target: item1
                color: "#000000"
            }
        }]
}

/*##^##
Designer {
    D{i:0;formeditorColor:"#00000c"}
}
##^##*/
