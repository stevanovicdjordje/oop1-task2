cmake_minimum_required(VERSION 3.24)
project(oop1dz2v4)

set(CMAKE_CXX_STANDARD 20)

add_executable(oop1dz2v4 main.cpp List.h Errors.h Table.h Table.cpp Selector.h Selector.cpp ColumnSelector.h ColumnSelector.cpp Command.h SelectionCommand.h SelectionCommand.cpp)
