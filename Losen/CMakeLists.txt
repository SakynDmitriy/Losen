cmake_minimum_required(VERSION 3.20)

project(Losen VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#"/media/try3/DiskD/Libr/ortools" or where ortools installed
list(APPEND CMAKE_PREFIX_PATH "/media/try3/DiskD/Libr/ortools")

find_package(ortools REQUIRED CONFIG)
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

include_directories(hFiles)
file(GLOB SRC "sFiles/*.cpp")
file(GLOB HDR "hFiles/*.h")

set(SOURCE ${SRC})
set(HEADER ${HDR})

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Losen
        MANUAL_FINALIZATION
        ${SOURCE}
        ${HEADER}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Losen APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(Losen SHARED
         ${SOURCE}
         ${HEADER}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(Losen
         ${SOURCE}
         ${HEADER}
        )
    endif()
endif()

target_link_libraries(Losen PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(Losen PUBLIC ortools::ortools)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.Losen)
endif()
set_target_properties(Losen PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS Losen
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Losen)
endif()
