#ifndef ROGUE_ABILITY
#define ROGUE_ABILITY

#include "Ability.h"

class RogueAbility : public Ability {
    public:
        RogueAbility(Unit* owner);
        virtual ~RogueAbility();

        virtual void attack(Unit* enemy);
};

#endif // ROGUE_ABILITY
