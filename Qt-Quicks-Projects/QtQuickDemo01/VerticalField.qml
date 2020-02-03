import QtQuick 2.2
import QtQuick.Controls 2.2

Column{

    id:rootId
    property alias vFieldLabelId: labelId
    property alias vFieldTextId: textfieldId

    Label{
        id:labelId
        text: "Some label"
    }
    TextField{
        id:textfieldId
        maximumLength: 100
    }
}
