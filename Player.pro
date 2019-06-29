TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

INCLUDEPATH += /usr/local/ffmpeg/include
INCLUDEPATH += /usr/local/sdl2/include

LIBS+= -L/usr/local/ffmpeg/lib \
       -lavcodec               \
       -lavdevice              \
       -lavfilter              \
       -lavformat              \
       -lavutil                \
       -lswresample            \
       -lswscale


LIBS += -L/usr/local/sdl2/lib/ \
        -lSDL2
