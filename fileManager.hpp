#ifndef FILEMANAGER_HPP
#define FILEMANAGER_HPP

#include <string>

class FileManager{
public:
  FileManager();
  FileManager(std::string, char);
  FileManager(std::string input, std::string output);
  ~FileManager();
  void reprintInputToOutput();
  void appendLine(std::string);
private:
  std::string inputFileName;
  std::string outputFileName;
  bool inputSet;
  bool outputSet;


};

#endif
