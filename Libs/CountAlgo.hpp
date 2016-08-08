#include <string>
#include "MapReader.hpp"
#include "AlgoABC.hpp"

// One implementation of AlgoABC that implements a count of a char in the map
// C. Barry

#ifndef COUNTALGO_H
#define COUNTALGO_H


class CountAlgo: public AlgoABC 
{
public:
  CountAlgo();
  CountAlgo(std::string search_char);
  ~CountAlgo();
  // Needs to be extended, test interface concept
  double TestAlgo(MapReader & map);
private:
  double fAlgoStat;
  std::string fSearchChar;
};

#endif


