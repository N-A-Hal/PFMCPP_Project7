#pragma once

//#include "Character.h"
struct Character;

struct DragonSlayer : Character
{
    DragonSlayer(std::string name_, int hp_, int armor_);
    const std::string& getName() override;
    std::string getStats() override;
    void attack(Character& other) override;
private:
    const std::string name;
    //std::vector<std::unique_ptr<Item>> attackItems;
    std::unique_ptr<Item> attackItem;
    bool notUsedAttackItem = true;
};
