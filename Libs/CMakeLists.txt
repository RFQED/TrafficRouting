# Create a library called "MapReader" which includes the source file "MapReader.cpp".
# The extension is already found. Any number of sources could be listed here.
add_library (MapReader MapReader.cpp)
add_library (AlgoABC AlgoABC.cpp)
add_library (CountAlgo CountAlgo.cpp)

# Make sure the compiler can find include files for our MapReader library
# when other libraries or executables link to MapReader
target_include_directories (MapReader PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories (AlgoABC PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories (CountAlgo PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
