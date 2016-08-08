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
    fnumber_of_lines++;
    if(line.length()>fmax_width){fmax_width=line.length();}
  }

  fMapVector.resize(fmax_width);
  for(int i=0; i<fMapVector.size(); ++i){
    fMapVector[i].resize(fnumber_of_lines);
  }

  // Read the route into the vector
  routeMap.clear();
  routeMap.seekg(0, std::ios::beg);
  
  {unsigned int linenumber = 0;
    while(getline(routeMap,line)){
      for(int i=0; i<line.length(); ++i){
        fMapVector[i][linenumber] = line[i];
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
  return fnumber_of_lines;
}
  
int MapReader::GetMaxWidth()
{
  return fmax_width;
}

void MapReader::Print()
{
  //Implement a printing method to the screen
  //Looks a bit weird, could be improved
  int j=0;
  while ( j < fnumber_of_lines ) {
    for(int i=0; i < fMapVector.size(); ++i){
      std::cout << fMapVector[i][j];
    }
    j++;
    std::cout << std::endl;
  }
}
