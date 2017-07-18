#include "board.hpp"

Board::Board() {
  rows_ = 10;
  columns_ = 10;
  deck_ = new Field*[rows_];
  for (int i = 0; i < rows_; i++) {
    deck_[i] = new Field[columns_];
  }
  }

Board::Board(int row, int column) {
  rows_ = row;
  columns_ = column;
  deck_ = new Field*[rows_];
  for (int i = 0; i < rows_; i++) {
    deck_[i] = new Field[columns_];
  }
}

FieldType Board::getField(int row, int column) {
  return deck_[row][column].getField();
}
