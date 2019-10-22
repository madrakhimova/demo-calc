TARGET = calc-example
CONFIG += sailfishapp sailfishapp_i18n

SAILFISHAPP_ICONS = 86x86 108x108 128x128 172x172

TRANSLATIONS += \
    translations/calc-example-ru.ts

LIBS += -L$$OUT_PWD/../libcalc -lcalc

SOURCES += \
    src/calc-example.cpp

DISTFILES += \
    qml/Source.qml

