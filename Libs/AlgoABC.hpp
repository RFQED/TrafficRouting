#include "MapReader.hpp"

// Pure abstract base class defining interface for algorithms to run over the read in maps
// C. Barry

#ifndef ALGOABC_H
#define ALGOABC_H


class AlgoABC
{
public:
  virtual ~AlgoABC();
  // Needs to be extended, test interface concept
  virtual double TestAlgo(MapReader & map) = 0 ;
protected:
  AlgoABC();
};

#endif


