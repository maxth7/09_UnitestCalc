QT += testlib
QT += gui
CONFIG += qt warn_on depend_includepath testcase

TEMPLATE = app

HEADERS += ../calcgrade/calculategrade.h
SOURCES  =../calcgrade/calculategrade.cpp
SOURCES +=tst_test01.cpp


