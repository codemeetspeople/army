#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include "../state/State.h"

class Unit {
    protected:
        State* state;

    public:
        Unit(const char* title, int hp, int dmg);
        virtual ~Unit();

        const char* getTitle() const;
        int getHp() const;
        int getHpLimit() const;
        int getDmg() const;

        void addHp(int hp);
        void takeDmg(int dmg);
};

#endif // UNIT_H
