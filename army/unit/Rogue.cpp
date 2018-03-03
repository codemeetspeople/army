#include "Rogue.h"

Rogue::Rogue(const char* title, int hp, int dmg) : Unit(title, hp, dmg) {
    this->ability = new RogueAbility(this);
}

Rogue::~Rogue() {}
