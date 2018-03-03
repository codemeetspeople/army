#include "Ability.h"

Ability::Ability(Unit* owner) {
    this->owner = owner;
}

Ability::~Ability() {}

void Ability::counterAttack(Unit* enemy) {
    enemy->takeDmg(this->owner->getDmg()/2);
}

void Ability::attack(Unit* enemy) {
    enemy->takeDmg(this->owner->getDmg());
    enemy->counterAttack(this->owner);
}
