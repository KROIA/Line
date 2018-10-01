# Line
Draw Lines in QT

# How to Install
* Download the Repository
* Install [Geometry](https://github.com/KROIA/Geometry) 
* Unzip it to your favorite DLL build destination
***
***
# Change the Buildpath
* Go to Settings:
QT-Creator->Tools->Options->Build & Run
and change the **Default build directory:** to
`
../%{JS: Util.asciify("build-%{CurrentBuild:Name}")}
`
If you already have this Settings, you can skip the following step.
* Save the settings, close the project and **delete** the **.user** file.
***
# How to build
* Open the **.pro** file, select the MinGW compiler.
* Edit the **.pro** file:
```c++
incPath = C:\Users\AlexKrieg\Documents\QT\lib\Geometry

INCLUDEPATH += $$incPath

SOURCES += \
        line.cpp \
        $$incPath/geometry.cpp
```
Change the **incPath** to the destination where you installed the Geometry header file.
* Save the .pro file
* Build it
***
