#ifndef FIELD_HPP
#define FIELD_HPP

enum FieldType {
  CLEAR = 0, ONE = 1, TWO = 2, THREE = 3, FOUR = 4, FIVE = 5, SIX = 6, SEVEN = 7, EIGHT = 8, HIDDEN = 9, BOMB = 10
};

class Field {
public:
  Field();
  Field(FieldType);
  void print();
  FieldType getField();
private:
  FieldType piece_;

};

#endif
