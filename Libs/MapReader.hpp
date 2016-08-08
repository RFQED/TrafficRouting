#include <vector>
#include <string>

#ifndef MAPREADER_H
#define MAPREADER_H

class MapReader 
{
public:
  MapReader(std::string file_path);
  ~MapReader();
  int GetNumLines();
  int GetMaxWidth();
  // Output the MapVector to the screen
  void Print();
  
  // Return a const reference to the vector of vectors
  // so that we can access vector elements without changing it 
  const std::vector<std::vector<std::string> > & GetMapVector() const {return fMapVector;}
  // Allow changes to map vector
  std::vector<std::vector<std::string> > & SetMapVector()       {return fMapVector;}
  
private:
  unsigned int fnumber_of_lines = 0;
  unsigned int fmax_width       = 0;

  // Holds the map details
  std::vector< std::vector< std::string> > fMapVector;

  // std::vector< std::string > ::iterator fCols;
  // std::vector< std::vector< std::string> > ::iterator fRows;
};


#endif //MAPREADER_H
