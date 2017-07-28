TEMPLATE = app

QT += qml quick
CONFIG += c++11

SOURCES += main.cpp \
    tablemodel.cpp \
    ../gen/Debug/messages/requests.grpc.pb.cc \
    ../gen/Debug/messages/requests.pb.cc \
    grpcclient.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    tablemodel.h \
    ../gen/Debug/messages/requests.grpc.pb.h \
    ../gen/Debug/messages/requests.pb.h \
    grpcclient.h

unix:!macx: LIBS += -L$$PWD/../../../../opt/grpc/lib/ -lgrpc++

INCLUDEPATH += $$PWD/../../../../opt/grpc/include
DEPENDPATH += $$PWD/../../../../opt/grpc/include

unix:!macx: PRE_TARGETDEPS += $$PWD/../../../../opt/grpc/lib/libgrpc++.a

unix:!macx: LIBS += -L$$PWD/../../../../opt/grpc/lib/ -lprotobuf

INCLUDEPATH += $$PWD/../../../../opt/grpc/include
DEPENDPATH += $$PWD/../../../../opt/grpc/include

unix:!macx: PRE_TARGETDEPS += $$PWD/../../../../opt/grpc/lib/libprotobuf.a

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../opt/grpc/lib/release/ -lgrpc
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../opt/grpc/lib/debug/ -lgrpc
else:unix: LIBS += -L$$PWD/../../../../opt/grpc/lib/ -lgrpc

INCLUDEPATH += $$PWD/../../../../opt/grpc/include
DEPENDPATH += $$PWD/../../../../opt/grpc/include

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../../opt/grpc/lib/release/libgrpc.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../../opt/grpc/lib/debug/libgrpc.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../../opt/grpc/lib/release/grpc.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../../opt/grpc/lib/debug/grpc.lib
else:unix: PRE_TARGETDEPS += $$PWD/../../../../opt/grpc/lib/libgrpc.a

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../opt/grpc/lib/release/ -lgrpc++
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../opt/grpc/lib/debug/ -lgrpc++
else:unix: LIBS += -L$$PWD/../../../../opt/grpc/lib/ -lgrpc++

INCLUDEPATH += $$PWD/../../../../opt/grpc/include
DEPENDPATH += $$PWD/../../../../opt/grpc/include
