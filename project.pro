QT		+= core gui

@if "%OGLES2Support%" == "true"
QT		+= opengl
@endif

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

QMAKE_CXXFLAGS+=-Wno-psabi

TARGET = %ProjectName%
TEMPLATE = app

target.files = %ProjectName%
target.path = %RemotePath%
INSTALLS = target

SOURCES += main.cpp\
        %ClassName:l%.%CppSourceSuffix%

HEADERS  += %ClassName:l%.%CppHeaderSuffix%

FORMS    += %ClassName:l%.ui
