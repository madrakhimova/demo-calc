TEMPLATE = subdirs

SUBDIRS = calc-example libcalc
calc-example.depends = libcalc

OTHER_FILES += \
    rpm/calc-example.changes.in \
    rpm/calc-example.changes.run.in \
    rpm/calc-example.spec \
    rpm/calc-example.yaml
