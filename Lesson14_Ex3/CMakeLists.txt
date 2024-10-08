# CMakeList.txt: проект CMake для Lesson14_Ex3; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Lesson14_Ex3 "Lesson14_Ex3.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Lesson14_Ex3 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
