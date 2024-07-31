qt_add_library(ExtraModule STATIC)
qt_add_qml_module(ExtraModule
    URI extra_module
    VERSION 1.0
    QML_FILES
        Extra_Page.qml
)
