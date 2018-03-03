#include "catch.hpp"
#include "../unit/Soldier.h"
#include "../unit/Rogue.h"

TEST_CASE( "class Rogue tests" ) {
    Rogue* r1 = new Rogue("R1", 40, 68);
    
    REQUIRE( r1->getTitle() == "R1" );
    REQUIRE( r1->getHp() == 40 );
    REQUIRE( r1->getHpLimit() == 40 );
    REQUIRE( r1->getDmg() == 68 );

    Soldier* s2 = new Soldier("S2", 150, 20);
    
    REQUIRE( s2->getTitle() == "S2" );
    REQUIRE( s2->getHp() == 150 );
    REQUIRE( s2->getHpLimit() == 150 );
    REQUIRE( s2->getDmg() == 20 );
    
    SECTION( "epic battle" ) {
        r1->attack(s2);

        REQUIRE( s2->getHp() == 150 - 68 );
        REQUIRE( r1->getHp() == 40 );
    }
}
