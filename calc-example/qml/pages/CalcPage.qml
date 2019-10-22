import QtQuick 2.6
import Sailfish.Silica 1.0
import calc.example 1.0

Page {
    Calc {
        id: calc
        leftArg: parseFloat(firstArg.text)
        rightArg: parseFloat(secondArg.text)
    }

    SilicaFlickable {
        anchors.fill: parent
        contentHeight: column.height
        Column {
            id: column
            width: parent.width
            spacing: Theme.paddingLarge

            PageHeader {
                title: qsTr("Calculator")
            }

            TextField {
                id: firstArg
                text: "0"
                width: parent.width
                validator: DoubleValidator { }
                inputMethodHints: Qt.ImhFormattedNumbersOnly
            }
            TextField {
                id: secondArg
                text: "0"
                width: parent.width
                validator: DoubleValidator { }
                inputMethodHints: Qt.ImhFormattedNumbersOnly
            }
            Label { text: qsTr("Sum: %1").arg(calc.sum); x: Theme.horizontalPageMargin }
            Label { text: qsTr("Difference: %1").arg(calc.difference); x: Theme.horizontalPageMargin }
            Label { text: qsTr("Product: %1").arg(calc.product); x: Theme.horizontalPageMargin }
            Label { text: qsTr("Quotient: %1").arg(calc.quotient); x: Theme.horizontalPageMargin }
        }
    }

    Button {
       id: sourceCode
       text: "source code"
       anchors {
           horizontalCenter: parent.horizontalCenter
           bottom: parent.bottom
           margins: Theme.paddingMedium
       }
       onClicked: pageStack.push(Qt.resolvedUrl("Source.qml"));
    }
}
