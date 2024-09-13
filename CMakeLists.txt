cmake_minimum_required(VERSION 3.10)

project(Helloworld)

find_package(fmt CONFIG REQUIRED)
find_package(cpprestsdk CONFIG REQUIRED)
find_package(opentelemetry-cpp CONFIG REQUIRED)
find_package(cpr CONFIG REQUIRED)

add_executable(Helloworld Helloworld.cpp)

target_link_libraries(Helloworld PRIVATE fmt::fmt)
target_link_libraries(Helloworld PRIVATE cpprestsdk::cpprest)
target_link_libraries(Helloworld PRIVATE opentelemetry-cpp::api)
target_link_libraries(Helloworld PRIVATE cpr::cpr)