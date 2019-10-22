import QtQuick 2.6
import Sailfish.Silica 1.0

ApplicationWindow
{
    initialPage: Qt.resolvedUrl("pages/CalcPage.qml")
    cover: Component {
        CoverBackground {
            CoverPlaceholder {
                text: qsTr("Calculator")
                icon.source: "image://theme/calc-example"
            }
        }
    }
    allowedOrientations: defaultAllowedOrientations
}
