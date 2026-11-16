cmake_minimum_required(VERSION 3.14)
Project(Cavaliri C CXX)
set(C_MAKE_C_STANDARD 11)
set(C_MAKE_Cxx_STANDARD 17)

# i .c diventono una libreria ps non il main
file(GLOB GAME_SRC CONFIGURE_DEPENDS ${CMAKE_SOURCE_DIR}/*.c)
list(FILTER GAME_SRC EXCLUDE REGEX "[/\\\\][Mm]ain\\.c$")
add_library(game_core STATIC ${GAME_SRC})
target_include_directories(game_core PUBLIC ${CMAKE_SOURCE_DIR})

add_executable(main main.c)
target_link_libraries(main game_core)

# test  
include(FetchContent)
FetchContent_Declare(googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        v1.14.0)

FetchContent_MakeAvailable(googletest)

add_executable(run_tests
  tests/test_domande.cpp
  tests/test_save.cpp
  tests/test_quiz.cpp)
target_link_libraries(run_tests game_core GTest::gtest_main)

enable_testing()
include(GoogleTest)
gtest_discover_tests(run_tests DISCOVERY_TIMEOUT 30)