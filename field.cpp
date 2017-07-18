#include "field.hpp"
#include <iostream>

Field::Field() {
  piece_ = HIDDEN;
}

Field::Field(FieldType type) {
  piece_ = type;
}

void Field::print() {
  switch (piece_) {
    case CLEAR:
      std::cout << '_';
      break;
    case ONE:
      std::cout << '1'; break;
    case TWO:
      std::cout << '2'; break;
    case THREE:
      std::cout << '3'; break;
    case FOUR:
      std::cout << '4'; break;
    case FIVE:
      std::cout << '5'; break;
    case SIX:
      std::cout << '6'; break;
    case SEVEN:
      std::cout << '7'; break;
    case EIGHT:
      std::cout << '8'; break;
    case HIDDEN:
      std::cout << '#'; break;
    case BOMB:
      std::cout << '*'; break;



  }
}

FieldType Field::getField() {
  return piece_;
}
