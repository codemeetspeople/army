#include "State.h"

State::State(const char* title, int hp, int dmg)
    : title(title), hp(hp), hpLimit(hp), dmg(dmg) {}

State::~State() {}

void State::ensureIsAlive() {
    if ( this->hp == 0 ) {
        throw NoHPException();
    } 
}

const char* State::getTitle() const {
    return this->title;
}

int State::getHp() const {
    return this->hp;
}

int State::getHpLimit() const {
    return this->hpLimit;
}

int State::getDmg() const {
    return this->dmg;
}

void State::addHp(int hp) {
    this->ensureIsAlive();

    int total = this->hp + hp;

    if ( total > this->hpLimit ) {
        this->hp = this->hpLimit;
        return;
    }
    this->hp = total;
}

void State::takeDmg(int dmg) {
    this->ensureIsAlive();

    if ( dmg > this->hp ) {
        this->hp = 0;
        return;
    }
    this->hp -= dmg;
}
