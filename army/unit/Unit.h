#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include "../state/State.h"
#include "../ability/Ability.h"

class Ability;

class Unit {
    protected:
        State* state;
        Ability* ability;

    public:
        Unit(const char* title, int hp, int dmg);
        virtual ~Unit();

        const char* getTitle() const;
        int getHp() const;
        int getHpLimit() const;
        int getDmg() const;

        void addHp(int hp);
        void takeDmg(int dmg);

        virtual void attack(Unit* enemy);
        virtual void counterAttack(Unit* enemy);
};

#endif // UNIT_H
