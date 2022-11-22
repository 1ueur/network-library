TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt
INCLUDEPATH += ../../src
SOURCES += \
	../../src/tcpclient.cpp \
	../../src/tcpsession.cpp \
	../../src/tlsclient.cpp \
	../../src/tlssession.cpp \
	tcpclient-test.cpp

HEADERS += \
	../../src/client.h \
	../../src/session.h \
	../../src/tcpclient.h \
	../../src/tcpsession.h \
	../../src/tlsclient.h \
	../../src/tlssession.h
