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
    void Print();
  
    // Return a const reference to the vector of vectors
    // so that we can access vector elements without changing it 
    std::vector<std::vector<char> > const &GetMapVector() const {return MapVector;} 
    
  private:
    unsigned int number_of_lines = 0;
    unsigned int max_width       = 0;

  // Holds the map details
    std::vector<std::vector<char> > MapVector;
};


#endif //MAPREADER_H
