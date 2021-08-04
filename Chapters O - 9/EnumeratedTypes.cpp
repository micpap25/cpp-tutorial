#include <iostream>

int main() {
    // Enums assign integer values starting from 0 to a list of things
    // Best used to represent states; don't assign values to enums, normally.
    // enum values can be used freely in scope, so you cannot define the same enum value twice.
    enum Monster {
        monster_orc,
        monster_goblin,
        monster_troll,
        monster_ogre,
        monster_skeleton,
    };

    Monster mon{monster_troll};
    std::cout << mon << "\n";

    if (mon == monster_troll) {
        std::cout << "yep that's a troll\n";
    }
    else {
        std::cout << "nope that's not a troll\n";
    }

    return 0;
}