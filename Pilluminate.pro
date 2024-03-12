QT += core gui widgets

CONFIG += c++11

TARGET = Pilluminate
TEMPLATE = app

SOURCES += src/controllers/TimerManager.cpp \
           src/controllers/VirtualLEDController.cpp \
           src/interfaces/UserInterface.cpp \
           src/models/ColorProfile.cpp \
           src/models/DateTime.cpp \
           src/models/ScheduledTask.cpp \
           src/models/VirtualLED.cpp \
           src/utils/ConfigurationManager.cpp \
           src/main.cpp

HEADERS += include/controllers/TimerManager.h \
           include/controllers/VirtualLEDController.h \
           include/interfaces/UserInterface.h \
           include/models/ColorProfile.h \
           include/models/DateTime.h \
           include/models/ScheduledTask.h \
           include/models/VirtualLED.h \
           include/utils/ConfigurationManager.h

# Add the include path for headers
INCLUDEPATH += $$PWD/include
