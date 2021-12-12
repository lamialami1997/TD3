cmake_minimum_required(VERSION 3.10)
project (TD2)

find_package(GTest REQUIRED)
set (SOURCE ${SOURCE}
            ${CMAKE_CURRENT_SOURCE_DIR}/problem.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/equation.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/Variable.cpp
            )
set (HEADERS ${HEADERS}
             ${CMAKE_CURRENT_SOURCE_DIR}/problem.h
             ${CMAKE_CURRENT_SOURCE_DIR}/equation.h
             ${CMAKE_CURRENT_SOURCE_DIR}/Variable.h
            )
add_executable(Main ${SOURCE} ${HEADERS})
enable_testing()
    add_test(test Main)

set (TEST ${TEST}
    ${CMAKE_CURRENT_SOURCE_DIR}/problem.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/equation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/test.cpp
    )
add_executable(Test ${TEST} ${HEADERS} )
target_link_libraries(Test PUBLIC GTest::GTest PUBLIC  GTest::Main)
gtest_discover_tests(Test)
