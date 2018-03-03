#include "catch.hpp"
#include "../Exceptions.h"
#include "../unit/Soldier.h"

TEST_CASE( "class Soldier tests" ) {
    Soldier* s1 = new Soldier("S1", 150, 20);
    
    REQUIRE( s1->getTitle() == "S1" );
    REQUIRE( s1->getHp() == 150 );
    REQUIRE( s1->getHpLimit() == 150 );
    REQUIRE( s1->getDmg() == 20 );

    Soldier* s2 = new Soldier("S2", 150, 20);
    
    REQUIRE( s2->getTitle() == "S2" );
    REQUIRE( s2->getHp() == 150 );
    REQUIRE( s2->getHpLimit() == 150 );
    REQUIRE( s2->getDmg() == 20 );
    
    SECTION( "epic battle" ) {
        s1->attack(s2);

        REQUIRE( s2->getHp() == 130 );
        REQUIRE( s1->getHp() == 140 );
    }
}
