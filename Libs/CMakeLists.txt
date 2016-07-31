# Create a library called "Hello" which includes the source file "MapReader.cpp".
# The extension is already found. Any number of sources could be listed here.
add_library (MapReader MapReader.cpp)

# Make sure the compiler can find include files for our MapReader library
# when other libraries or executables link to MapReader
target_include_directories (MapReader PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
