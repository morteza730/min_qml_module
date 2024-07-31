qt_add_library(MainModule STATIC)
qt_add_qml_module(MainModule
    URI main_module
    VERSION 1.0
    QML_FILES
        Main_Page.qml
)

add_subdirectory(submodule)
