#ifndef SOLDIER_ABILITY
#define SOLDIER_ABILITY

#include "Ability.h"

class SoldierAbility : public Ability {
    public:
        SoldierAbility(Unit* owner);
        virtual ~SoldierAbility();

        virtual void attack(Unit* enemy);
};

#endif // SOLDIER_ABILITY
