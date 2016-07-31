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
  
  private:
    unsigned int number_of_lines = 0;
    unsigned int max_width       = 0;

  // Holds the map details
    std::vector<std::vector<char> > MapVector;
};


#endif //MAPREADER_H
