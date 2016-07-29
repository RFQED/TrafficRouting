#include<iostream>
#include<fstream>
#include<vector>

// Author: Adam Roberts

int main() {

  std::cout << "Welcome to TrafficRouter!" << std::endl;
  
  // Read the route and throw an error if something goes wrong
  std::ifstream routeMap;
//  routeMap.open ("route.txt");
    routeMap.open ("/Users/willturner/CLionProjects/TrafficRouting/route.txt");
  if(!routeMap){std::cout << "Error: Route map not found" << std::endl;}

  // Find out some information about the map file; width and height.
  unsigned int numberoflines = 0;
  unsigned int maxwidth = 0;
  
  std::string line;
  while(getline(routeMap, line)){
    numberoflines++;
    if(line.length()>maxwidth){maxwidth=line.length();}
  }

  std::cout << "The world map is " << numberoflines << " elements tall" << 
    " and is at most " << maxwidth << " elements wide" << std::endl;

  // Create a vector for storing the map - MapVector[i][j]. [0][0] is the top left corner.
  std::vector<std::vector<char> > MapVector;
  MapVector.resize(maxwidth);
  for(int i=0; i<MapVector.size(); ++i){
    MapVector[i].resize(numberoflines);
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

  // We now have the world loaded into the vector MapVector[][]

  return 0;
}
