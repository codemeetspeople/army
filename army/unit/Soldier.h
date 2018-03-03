#ifndef SOLDIER_H
#define SOLDIER_H

#include "../ability/SoldierAbility.h"
#include "Unit.h"

class Soldier : public Unit {
    public:
        Soldier(const char* title, int hp, int dmg);
        virtual ~Soldier();
};

#endif // SOLDIER_H
