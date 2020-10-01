/********************************************
*
* FileReader.h
*
* @author Ryan Morehouse
* @license MIT
*
* A (very) simple c++ helper program to get
* input from a file. This will be essentially
* a place I can add code snippets for reading
* from files rather than constantly re-writing
* the same thing over and over again.
*
*********************************************/

#ifndef FILEREADER_H
#define FILEREADER_H

#include <fstream>
#include <vector>
#include <string>

class FileReader {
  public:
    std::vector<std::string> getLines(std::string filename);
};

#endif
