#include <iostream>
using namespace std;

int main()
{
    enum class MonsterType
    {
        monster_orc,
        monster_goblin,
        monster_troll,
        monster_ogre,
        monster_skeleton
    };
    MonsterType mm  = MonsterType::monster_troll;
    MonsterType m2 = mm;
    return 0;
}