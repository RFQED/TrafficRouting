#include <iostream>
#include <vector>
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
  double match_counter = 0;
  // Iterate over the MapReader vector object
  for ( MapReader::const_vec_vec_str iter_lines = map.begin_width(); iter_lines != map.end_width(); ++iter_lines){
    for ( MapReader::const_vec_str iter_width = (*iter_lines).begin(); iter_width != (*iter_lines).end(); ++iter_width){
      if (*iter_width == fSearchChar) {
        match_counter++;
      }
    }
  }
  return match_counter;
}

CountAlgo::~CountAlgo()
{

}
