/*********************************************
*
* FileReader.cpp
*
* @author Ryan Morehouse
* @license MIT
*
* A (very) simple c++ helper program to get
* input from a file.
*
*********************************************/

#include <fstream>
#include <vector>
#include <string>
#include "FileReader.h"

// returns empty vector if file not opened
std::vector<std::string> FileReader::getLines(std::string filename) {
  std::vector<std::string> lines;
  std::ifstream file(filename);
  if(file.is_open()) {
    for(std::string line; getline(file, line); ) {
      lines.push_back(line);
    }
  }

  return lines;
}
