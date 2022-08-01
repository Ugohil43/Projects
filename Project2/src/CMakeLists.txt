set(project2_SRCS
    project2.cpp
)

ecm_qt_declare_logging_category(project2_SRCS
    HEADER debug.h
    IDENTIFIER PLUGIN_PROJECT2
    CATEGORY_NAME "kdevelop.plugin.project2"
)

kdevplatform_add_plugin(project2
    JSON project2.json
    SOURCES ${project2_SRCS}
)

target_link_libraries(project2
    KDev::Interfaces
)
