TEMPLATE = lib
TARGET = calc
target.path = /usr/share/calc-example/lib
CONFIG += unversioned_libname

SOURCES += \
    src/Calc.cpp

HEADERS += \
    src/Calc.h

INSTALLS = target
