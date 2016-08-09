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

  // Typedef these vector iterators to make any subsequent changes easier
  typedef std::vector< std::string > :: const_iterator const_vec_str;
  typedef std::vector< std::vector< std::string> > :: const_iterator const_vec_vec_str;
  
  // Return iterators to the vector to allow looping over the map outside the class
  // const_vec_str begin_lines() const {return fMapVector.begin()->begin();}
  // const_vec_str end_lines()   const {return fMapVector.end()->end();}
  const_vec_vec_str begin_width() const {return fMapVector.begin();}
  const_vec_vec_str end_width()   const {return fMapVector.end();}

private:
  unsigned int fnumber_of_lines = 0;
  unsigned int fmax_width       = 0;

  // Holds the map details
  std::vector< std::vector< std::string> > fMapVector;

};


#endif //MAPREADER_H
