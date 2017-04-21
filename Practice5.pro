TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    mapgeneric.cpp \
    maptriple.cpp \
    mapsquare.cpp \
    mapabsolutevalue.cpp \
    filtergeneric.cpp \
    filterodd.cpp \
    filternonpositive.cpp \
    filterfortwodigitpositive.cpp \
    reducegeneric.cpp \
    reduceminimum.cpp \
    reducegcd.cpp

HEADERS += \
    mapgeneric.h \
    maptriple.h \
    mapsquare.h \
    mapabsolutevalue.h \
    filtergeneric.h \
    filterodd.h \
    filternonpositive.h \
    filterfortwodigitpositive.h \
    reducegeneric.h \
    reduceminimum.h \
    reducegcd.h

