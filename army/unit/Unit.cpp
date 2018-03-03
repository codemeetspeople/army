#include "Unit.h"

Unit::Unit(const char* title, int hp, int dmg) {
    this->state = new State(title, hp, dmg);
}

Unit::~Unit() {
    delete(this->state);
}

const char* Unit::getTitle() const {
    return this->state->getTitle();
}

int Unit::getHp() const {
    return this->state->getHp();
}

int Unit::getHpLimit() const {
    return this->state->getHpLimit();
}

int Unit::getDmg() const {
    return this->state->getDmg();
}

void Unit::addHp(int hp) {
    this->state->addHp(hp);
}

void Unit::takeDmg(int dmg) {
    this->state->takeDmg(dmg);
}

void Unit::attack(Unit* enemy) {
    this->ability->attack(enemy);
}

void Unit::counterAttack(Unit* enemy) {
    this->ability->counterAttack(enemy);
}
