QT -= gui

INCLUDEPATH += C:/happy/sourse/repos/181-351_belova_2/openssltest/include
LIBS += -L"C:/happy/sourse/repos/181-351_belova_2/openssltest"
LIBS += -L"C:/happy/sourse/repos/181-351_belova_2/openssltest/lib" -llibssl
LIBS += -L" C:/happy/sourse/repos/181-351_belova_2/openssltest/lib" -llibcrypto

CONFIG += c++11 console
CONFIG -= app_bundle

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32: LIBS += -L$$PWD/../OpenSSL_i_varianty/ -llibcrypto

INCLUDEPATH += $$PWD/../OpenSSL_i_varianty/include
DEPENDPATH += $$PWD/../OpenSSL_i_varianty/include

win32: LIBS += -L$$PWD/../OpenSSL_i_varianty/ -llibssl

INCLUDEPATH += $$PWD/../OpenSSL_i_varianty/include
DEPENDPATH += $$PWD/../OpenSSL_i_varianty/include

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../OpenSSL/ -llibcrypto
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../OpenSSL/ -llibcryptod
else:unix: LIBS += -L$$PWD/../OpenSSL/ -llibcrypto

INCLUDEPATH += $$PWD/'../../../../Desktop/Новая папка/181-351_semennikov_kirill/server/OpenSSL_i_varianty'
DEPENDPATH += $$PWD/'../../../../Desktop/Новая папка/181-351_semennikov_kirill/server/OpenSSL_i_varianty'
