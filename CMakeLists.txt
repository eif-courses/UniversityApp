cmake_minimum_required(VERSION 3.17)
project(UniversityApp)

set(CMAKE_CXX_STANDARD 14)

add_executable(UniversityApp main.cpp Person.cpp Person.h Professor.cpp Professor.h Student.cpp Student.h Address.cpp Address.h Cashier.cpp Cashier.h PersonalComputer.cpp PersonalComputer.h)