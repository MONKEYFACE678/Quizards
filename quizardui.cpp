/*
This is a UI file (.ui.qml) that is intended to be edited in Qt Design Studio only.
It is supposed to be strictly declarative and only uses a subset of QML. If you edit
this file manually, you might introduce QML code that is not supported by Qt Design Studio.
Check out https://doc.qt.io/qtcreator/creator-quick-ui-forms.html for details on .ui.qml files.
*/

import QtQuick
import QtQuick.Controls
import QuizardGUI

Rectangle {
    width: Constants.width
    height: Constants.height
    color: Constants.backgroundColor


    Text {
        width: 139
        height: 18
        text: qsTr("What is a large town called?")
        styleColor: "#e3f1ea"
        anchors.verticalCenterOffset: -161
        anchors.horizontalCenterOffset: -22
        anchors.centerIn: parent
        font.family: Constants.font.family
    }

    TextInput {
        id: textInput
        x: 468
        y: 848
        width: 195
        height: 57
        text: qsTr("Type answer here...")
        font.pixelSize: 12
    }

    Button {
        id: button
        x: 468
        y: 922
        text: qsTr("Submit")
        checkable: false
    }

    Text {
        id: text1
        x: 471
        y: 729
        width: 94
        height: 25
        text: qsTr("Geography Quiz")
        font.pixelSize: 12
        minimumPointSize: 15
        minimumPixelSize: 15
    }

    Text {
        id: text2
        x: -79
        y: -224
        width: 113
        height: 30
        text: qsTr("Geography Quiz")
        font.pixelSize: 12
        font.styleName: "Semibold"
    }

    TextInput {
        id: textInput1
        x: -92
        y: -114
        width: 132
        height: 20
        text: qsTr("Enter answer here...")
        font.pixelSize: 12
    }

    Button {
        id: button1
        x: -53
        y: -61
        width: 53
        height: 35
        text: qsTr("Submit")
    }
}
