#include <QtQuick>

#include <sailfishapp.h>
#include "Calc.h"

int main(int argc, char *argv[])
{
    qmlRegisterType<Calc>("calc.example", 1, 0, "Calc");
    return SailfishApp::main(argc, argv);
}
