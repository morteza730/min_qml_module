add_executable(executable
    main.cpp
    header.h
)

target_link_libraries(executable PRIVATE
    Qt6::Core
    Qt6::Quick
    Qt6::Qml
    MainModuleplugin
)

target_include_directories(executable PUBLIC .)

include(GNUInstallDirs)
install(TARGETS executable
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
