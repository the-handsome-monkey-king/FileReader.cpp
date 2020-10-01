/*************************************
*
* test.cpp
*
* @author Ryan Morehouse
* @license MIT
*
* A unit test of the FileReader class.
*
*************************************/

#include <string>
#include <vector>
#include <iostream>
#include "FileReader.h"

int main() {
  std::string file = "test_input.txt";
  FileReader fr = FileReader();
  std::vector<std::string> lines;
  lines = fr.getLines(file);

  std::cout << "Expected Output:" << std::endl;
  std::cout << "test line 0" << std::endl;
  std::cout << "test line 1" << std::endl;
  std::cout << "test line 2" << std::endl;
  std::cout << "test line 3" << std::endl;
  std::cout << "test line 4" << std::endl;
  std::cout << std::endl;

  std::cout << "Actual Output:" << std::endl;
  for(unsigned int i = 0; i < lines.size(); i++) {
    std::cout << lines[i] << std::endl;
  }

  return 0;
}
