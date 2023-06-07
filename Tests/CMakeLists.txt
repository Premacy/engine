project(Test)

add_compile_options("$<$<C_COMPILER_ID:GNU>:-std=c++11>")
set(test_src windowTest.cpp)
add_executable()