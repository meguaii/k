cmake_minimum_required(VERSION 3.10)
project(SimpleFactory)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

# Основной исполняемый файл
add_executable(SimpleFactoryExecutable main.cpp SimpleFactory.cpp)

# Google Test
enable_testing()

# Добавляем поддиректорию для Google Test
add_subdirectory(lib/googletest)

# Включаем директории для Google Test
include_directories(lib/googletest/googletest/include)

# Создаем исполняемый файл для тестов
add_executable(SimpleFactoryTests test/SimpleFactoryTest.cpp SimpleFactory.cpp)

# Линкуем библиотеки Google Test с тестовым исполняемым файлом
target_link_libraries(SimpleFactoryTests gtest gtest_main)

# Добавляем тест
add_test(NAME SimpleFactoryTests COMMAND SimpleFactoryTests)
