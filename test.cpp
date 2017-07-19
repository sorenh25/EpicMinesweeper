#include "fileManager.hpp"

int main() {
  std::string input = "input.txt";
  std::string output = "output.txt";

  FileManager FileMan_(input, output);

  FileMan_.reprintInputToOutput();

}
