#ifndef STATE_H
#define STATE_H

#include <iostream>
#include "../Exceptions.h"

class State {
    protected:
        const char* title;
        int hp;
        int hpLimit;
        int dmg;

    public:
        State(const char* title, int hp, int dmg);
        virtual ~State();

        const char* getTitle() const;
        int getHp() const;
        int getHpLimit() const;
        int getDmg() const;

        void ensureIsAlive();

        void addHp(int hp);
        void takeDmg(int dmg);
};


#endif // STATE_H
