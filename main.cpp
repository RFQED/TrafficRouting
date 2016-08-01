#include <iostream>
#include <fstream>
#include <vector>
#include "Libs/MapReader.hpp"

// Author: NOT Adam Roberts
// Put the Map Reading stuff into its own class


int main() {

  std::cout << "Welcome to TrafficRouter!" << std::endl;

  // Initialise a map object
  MapReader a_map("/Users/willturner/Desktop/ route.txt");

  std::cout << "The world map is " << a_map.GetNumLines() << " elements tall" 
            << " and is at most " << a_map.GetMaxWidth() << " elements wide" << std::endl;
  
  // We now have the world loaded into the vector MapVector[][].  

  // Print out the map to screen 
  a_map.Print();

  return 0;
}
