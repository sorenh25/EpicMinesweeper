#include "fileManager.hpp"
#include <fstream>
#include <iostream>

FileManager::FileManager() {

}

FileManager::FileManager(std::string fileName, char flag) {
  if (!(flag == 'i' | flag == 'o')) {
    std::cout << "The flag give was neither i nor o\n";
   return;
  }

  if (flag == 'i') {
    inputFileName = fileName;
    inputSet = true;
    outputSet = false;
    return;
  }

  if (flag == 'o') {
    outputFIleName = fileName;
    outputSet = true;
    inputSet = false;
    return;
  }
}

FileManager::FileManager(std::string input, std::string output) {
  inputFileName = input;
  outputFIleName = output;
  inputSet = true;
  outputSet = true;

}

FileManager::~FileManager() {

}

void FileManager::reprintInputToOutput() {
  if (!(inputSet && outputSet)) {
    std::cout << "can't reprint because input and ouput not set\n";
    return;
  }

  std::ifstream inputFile(inputFileName);
  std::ofstream outputFile(outputFIleName);

  if (!(inputFile.is_open() && outputFile.is_open())) {
    std::cout << "This is wrong\n";
    return;
  }

  int fileLength_ = inputFile.gcount();
  char* buffer_ = new char[fileLength_];

  inputFile.read(buffer_, fileLength_); // doesnt work for some reason
  outputFile.write(buffer_, fileLength_);

  delete[] buffer_;
  inputFile.close();
  outputFile.close();


}
