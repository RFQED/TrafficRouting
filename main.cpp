#include <iostream>
#include <fstream>
#include "Libs/MapReader.hpp"

// Author: Adam Roberts
// Put the Map Reading stuff into its own class

int main() {

  std::cout << "Welcome to TrafficRouter!" << std::endl;

  // Initialise a map object
  // MapReader might not be the best naming choicex
  MapReader a_map("route.txt");

  std::cout << "The world map is " << a_map.GetNumLines() << " elements tall" 
            << " and is at most " << a_map.GetMaxWidth() << " elements wide" << std::endl;
  
  // We now have the world loaded into an "a_map" object

  // Print out the map to screen
  std::cout << "Read in the map: \n";
  a_map.Print();

  std::cout << "\nPrint an element of the vector\n ";
  std::cout << a_map.GetMapVector()[1][1] << std::endl;
  
  return 0;
}
