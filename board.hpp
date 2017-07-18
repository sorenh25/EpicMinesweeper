#ifndef BOARD_HPP
#define BOARD_HPP

#include "field.hpp"

class Board {

public:
  Board();
  Board(int row, int column);
  FieldType getField(int, int);
private:
  Field** deck_;
  int rows_;
  int columns_;

};


#endif
