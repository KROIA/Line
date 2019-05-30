# Line
Draw Lines in QT

# How to install
* Download the repository
* Install [Geometry](https://github.com/KROIA/Geometry) 
* Unzip it to your favorite DLL build destination
***
***
# Change the buildpath
* Go to settings:
QT-Creator->Tools->Options->Build & Run
and change the **Default build directory:** to
`
bin/%{JS: Util.asciify("build-%{CurrentBuild:Name}")}
`
If you already have these settings, you can skip the following step.
* Save the settings, close the project and **delete** the **.user** file.
***
# How to build
* Open the **.pro** file, select the MinGW compiler.
* Edit the **.pro** file:
```c++
username     = AlexKrieg
QT_work_dir  = C:/Users/$$username/Documents/QT
geometryPath = $$QT_work_dir/lib/Geometry

INCLUDEPATH += $$geometryPath

SOURCES += \
        rect.cpp \
        $$geometryPath/geometry.cpp
```
Change the **username**, **QT_work_dir** and **geometryPath** to your personal settings.
* Save the .pro file
* Build it
***
