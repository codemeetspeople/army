#ifndef ABILITY_H
#define ABILITY_H

#include "../unit/Unit.h"

class Unit;

class Ability {
    protected:
        Unit* owner;

    public:
        Ability(Unit* owner);
        virtual ~Ability();

        virtual void attack(Unit* enemy) = 0;
        void counterAttack(Unit* enemy);
};

#endif // ABILITY_H
