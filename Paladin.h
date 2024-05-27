#pragma once

//#include "Character.h"
struct Character;

struct Paladin : Character
{
    Paladin(std::string name_, int hp_, int armor_);
    const std::string& getName() override;
    std::string getStats() override;
private:
    const std::string name;
};
