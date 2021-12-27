cmake_minimum_required(VERSION 3.20)
project(untitled1)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled1 main.cpp Source/Blocks/WriteFile.cpp Source/Blocks/WriteFile.h Source/Blocks/ReadFile.cpp Source/Blocks/ReadFile.h Source/Blocks/Grep.cpp Source/Blocks/Grep.h Source/Blocks/Dump.cpp Source/Blocks/Dump.h Source/Blocks/Sort.cpp Source/Blocks/Sort.h Source/Blocks/Replace.cpp Source/Blocks/Replace.h Source/Blocks/Count.cpp Source/Blocks/Count.h Source/Blocks/IWorker.cpp Source/Blocks/IWorker.h Source/ConfigReader.cpp Source/ConfigReader.h Source/WorkflowExecutor.cpp Source/WorkflowExecutor.h Source/Blocks/Factory.cpp Source/Blocks/Factory.h)
