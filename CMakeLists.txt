cmake_minimum_required(VERSION 3.17)
project(SNAKE)

set(CMAKE_CXX_STANDARD 11)
set(SFML_DIR "SFML/lib/cmake/SFML")
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

add_executable(Snake main.cpp Game.cpp Game.h Window.cpp Window.h Rectangle.cpp Rectangle.h Snake.cpp Snake.h GameObject.cpp GameObject.h Time.cpp Time.h Input.cpp Input.h Food.cpp Food.h)
target_link_libraries(Snake sfml-graphics sfml-audio)