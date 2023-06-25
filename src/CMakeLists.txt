add_executable(lox_repl)
set_target_properties(lox_repl PROPERTIES OUTPUT_NAME "lox")
target_include_directories(lox_repl PUBLIC ${lox_SOURCE_DIR}/include)
file(GLOB sources ${lox_SOURCE_DIR}/src/*.cpp)
target_sources(lox_repl PRIVATE ${sources})
install(TARGETS lox_repl DESTINATION bin)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)