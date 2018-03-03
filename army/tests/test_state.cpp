#include "catch.hpp"
#include "../Exceptions.h"
#include "../state/State.h"

TEST_CASE( "class State tests" ) {
    int hp = 150;
    int dmg = 20;
    State* state = new State("State", hp, dmg);
    
    REQUIRE( state->getTitle() == "State" );
    REQUIRE( state->getHp() == hp );
    REQUIRE( state->getHpLimit() == hp );
    REQUIRE( state->getDmg() == dmg );
    
    SECTION( "take damage" ) {
        int attack = 10;
        int expected = state->getHp();

        state->takeDmg(attack);
        expected -= attack;

        REQUIRE( state->getHp() == expected );

        for ( int i = expected / attack; i > 0; i-- ) {
            state->takeDmg(attack);
            expected -= attack;

            REQUIRE( state->getHp() == expected );
        }

        try {
            state->takeDmg(attack);
        } catch ( NoHPException ) {
            REQUIRE( state->getHp() == 0 );
        }
    }

    SECTION( "Add hp" ) {
        state->takeDmg(140);

        REQUIRE( state->getHp() == 10 );

        for ( int i = 0; i < 14; i++ ) {
            REQUIRE( state->getHp() == (i + 1) * 10 );
            state->addHp(10);
        }

        state->addHp(10);
        REQUIRE( state->getHp() == state->getHpLimit() );
        state->addHp(10);
        REQUIRE( state->getHp() == state->getHpLimit() );
    }
    
}
