   cmake_minimum_required(VERSION 3.10)
   project(SimpleFactory)

   set(CMAKE_CXX_STANDARD 17)

   include_directories(.)

   add_executable(SimpleFactory main.cpp SimpleFactory.cpp)
   
