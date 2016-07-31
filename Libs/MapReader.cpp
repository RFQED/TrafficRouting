#include <iostream>
#include <fstream>
#include "MapReader.hpp"

MapReader::MapReader(std::string file_path)
{
  std::cout << "Creating Map From File: " << file_path << std::endl;
  
  std::ifstream routeMap;
  routeMap.open ("route.txt");
  if(!routeMap){std::cout << "Error: Route map not found" << std::endl;}

  std::string line;
  while(getline(routeMap, line)){
    number_of_lines++;
    if(line.length()>max_width){max_width=line.length();}
  }

  MapVector.resize(max_width);
  for(int i=0; i<MapVector.size(); ++i){
    MapVector[i].resize(number_of_lines);
  }

  // Read the route into the vector
  routeMap.clear();
  routeMap.seekg(0, std::ios::beg);
  
  {unsigned int linenumber = 0;
    while(getline(routeMap,line)){
      for(int i=0; i<line.length(); ++i){
        MapVector[i][linenumber] = line[i];
      }
      linenumber++;
    }
  }
  routeMap.close();
}
MapReader::~MapReader()
{
  std::cout << "Deleting Map Object" << std::endl;
}

int MapReader::GetNumLines()
{
  return number_of_lines;
}
  
int MapReader::GetMaxWidth()
{
  return max_width;
}

void MapReader::Print()
{
  //Implement a printing method to the screen 
}
