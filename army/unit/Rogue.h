#ifndef ROGUE_H
#define ROGUE_H

#include "../ability/RogueAbility.h"
#include "Unit.h"

class Rogue : public Unit {
    public:
        Rogue(const char* title, int hp, int dmg);
        virtual ~Rogue();
};

#endif // ROGUE_H
