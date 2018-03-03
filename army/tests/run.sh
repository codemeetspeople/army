#! /bin/bash

g++ -std=c++11 -c ../state/State.cpp
g++ -std=c++11 -c ../unit/Unit.cpp
g++ -std=c++11 -c ../unit/Soldier.cpp
g++ -std=c++11 -c ../unit/Rogue.cpp
g++ -std=c++11 -c ../ability/Ability.cpp
g++ -std=c++11 -c ../ability/SoldierAbility.cpp
g++ -std=c++11 -c ../ability/RogueAbility.cpp
g++ -std=c++11 -c test_unit.cpp
g++ -std=c++11 -c test_state.cpp
g++ -std=c++11 -c test_soldier.cpp
g++ -std=c++11 -c test_rogue.cpp
g++ -std=c++11 test_main.cpp *.o -o test.out
rm *.o
./test.out > result.txt
cat result.txt
