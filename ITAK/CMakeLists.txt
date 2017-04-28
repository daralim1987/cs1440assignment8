cmake_minimum_required(VERSION 3.6)
project(ITAK)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES )
add_executable(ITAK main.cpp ${SOURCE_FILES} TestMain.cpp Dictionary.cpp Dictionary.h Analyzer.cpp Analyzer.h Container.cpp
        Container.h Configuration.cpp Configuration.h ResultSet.cpp ResultSet.h DenialOfServiceAnalyzer.cpp DenialOfServiceAnalyzer.h PortScanAnalyzer.cpp PortScanAnalyzer.h Analyzer1.cpp Analyzer1.h Analyzer2.cpp Analyzer2.h UserInterface.cpp UserInterface.h)
set(TEST_FILES )
add_executable(Test TestMain.cpp ${SOURCE_FILES} ${TEST_FILES})
