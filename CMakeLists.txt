   cmake_minimum_required(VERSION 3.10)
   project(SimpleFactory)

   set(CMAKE_CXX_STANDARD 17)

   include_directories(.)

   add_executable(SimpleFactory main.cpp SimpleFactory.cpp)
   
     cmake_minimum_required(VERSION 3.10)
     project(SimpleFactory)

     set(CMAKE_CXX_STANDARD 17)

     include_directories(.)

     add_executable(SimpleFactory main.cpp SimpleFactory.cpp)

     # Google Test
     enable_testing()
     add_subdirectory(lib/googletest)
     include_directories(lib/googletest/googletest/include)

     add_executable(SimpleFactoryTests test/SimpleFactoryTest.cpp SimpleFactory.cpp)
     target_link_libraries(SimpleFactoryTests gtest gtest_main)
     add_test(NAME SimpleFactoryTests COMMAND SimpleFactoryTests)
     
