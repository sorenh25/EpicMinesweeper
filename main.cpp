

#include "field.hpp"
#include "board.hpp"
#include <iostream>

using namespace std;

int main() {
//  Field myField_;
//  myField_.print();

  Board first;
  Board second(2,3);

  cout << first.getField(0,0) << second.getField(1,2) << endl;



}
