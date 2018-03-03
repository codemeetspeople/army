#include "Soldier.h"

Soldier::Soldier(const char* title, int hp, int dmg) : Unit(title, hp, dmg) {
    this->ability = new SoldierAbility(this);
}

Soldier::~Soldier() {}
