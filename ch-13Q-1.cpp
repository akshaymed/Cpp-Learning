#include <iostream>
#include <string>

// Defining an enum class for MonsterType
enum class MonsterType {
    Ogre,
    Dragon,
    Orc,
    GiantSpider,
    Slime
};

// Defining a struct for Monster
struct Monster {
    MonsterType type;
    std::string name;
    int health;
};

// Function to print a monster's details
void printMonster(const Monster& monster) {
    std::string typeStr;
    switch (monster.type) {
        case MonsterType::Ogre:
            typeStr = "Ogre";
            break;
        case MonsterType::Dragon:
            typeStr = "Dragon";
            break;
        case MonsterType::Orc:
            typeStr = "Orc";
            break;
        case MonsterType::GiantSpider:
            typeStr = "Giant Spider";
            break;
        case MonsterType::Slime:
            typeStr = "Slime";
            break;
        default:
            typeStr = "Unknown";
            break;
    }
    
    std::cout << "This " << typeStr << " is named " << monster.name
              << " and has " << monster.health << " health." << std::endl;
}

int main() {
    Monster ogre = { MonsterType::Ogre, "Torg", 145 };
    Monster slime = { MonsterType::Slime, "Blurp", 23 };
    
    // Calling printMonster to print the details
    printMonster(ogre);
    printMonster(slime);
    
    return 0;
}
