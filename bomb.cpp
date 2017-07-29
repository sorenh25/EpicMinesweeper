#include bomb.hpp

Bomb::Bomb() : Field(BOMB){
  bombCount_++;
}

Bomb::~Bomb() {
  bombCount_--;
}
