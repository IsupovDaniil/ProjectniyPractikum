add_executable(SFML3.3 main.cpp)


target_include_directories(SFML3.3 PRIVATE ${SFML_INCLUDE_DIR})
target_compile_features(SFML3.3 PUBLIC cxx_std_17)
target_compile_definitions(SFML3.3 PRIVATE SFML_STATIC)

target_link_libraries(SFML3.3 ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})