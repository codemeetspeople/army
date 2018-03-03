#include "SoldierAbility.h"

SoldierAbility::SoldierAbility(Unit* owner) : Ability(owner) {}
SoldierAbility::~SoldierAbility() {}

void SoldierAbility::attack(Unit* enemy) {
    Ability::attack(enemy);
}
