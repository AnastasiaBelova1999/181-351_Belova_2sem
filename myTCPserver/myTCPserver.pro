QT += core network sql
QT -= gui

TARGET = EchoServer
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    mytcpserver.cpp \
    crypto.cpp \
    TinyAes.cpp

HEADERS += \
    mytcpserver.h \
    Crypter.h \
    crypto.h \
    TinyAes.h

