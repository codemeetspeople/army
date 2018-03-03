#include "catch.hpp"
#include "../Exceptions.h"
#include "../unit/Unit.h"

TEST_CASE( "class Unit tests" ) {
    int hp = 150;
    int dmg = 20;
    Unit* unit = new Unit("Unit", hp, dmg);
    
    REQUIRE( unit->getTitle() == "Unit" );
    REQUIRE( unit->getHp() == hp );
    REQUIRE( unit->getHpLimit() == hp );
    REQUIRE( unit->getDmg() == dmg );
    
    SECTION( "take damage" ) {
        int attack = 10;
        int expected = unit->getHp();

        unit->takeDmg(attack);
        expected -= attack;

        REQUIRE( unit->getHp() == expected );

        for ( int i = expected / attack; i > 0; i-- ) {
            unit->takeDmg(attack);
            expected -= attack;

            REQUIRE( unit->getHp() == expected );
        }

        try {
            unit->takeDmg(attack);
        } catch ( NoHPException ) {
            REQUIRE( unit->getHp() == 0 );
        }
    }

    SECTION( "Add hp" ) {
        unit->takeDmg(140);

        REQUIRE( unit->getHp() == 10 );

        for ( int i = 0; i < 14; i++ ) {
            REQUIRE( unit->getHp() == (i + 1) * 10 );
            unit->addHp(10);
        }

        unit->addHp(10);
        REQUIRE( unit->getHp() == unit->getHpLimit() );
        unit->addHp(10);
        REQUIRE( unit->getHp() == unit->getHpLimit() );
    }
    
}
