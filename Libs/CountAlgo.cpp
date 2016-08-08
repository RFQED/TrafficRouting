#include <iostream>
#include <string>
#include "CountAlgo.hpp"

// One implementation of AlgoABC that implements a count of a char in the map
// C. Barry


CountAlgo::CountAlgo()
{
  std::cout << "No search character specified, defaulting to space" << std::endl; 
  
  fSearchChar = " ";
}

CountAlgo::CountAlgo(std::string search_char)
{
  std::cout << "Specified {" << search_char << "} as the search character"  << std::endl; 
  fSearchChar = search_char;
}

double CountAlgo::TestAlgo(MapReader & map)
{
  //  map.GetMapvector
  //for (int i )

  return -999;
}

CountAlgo::~CountAlgo()
{

}
