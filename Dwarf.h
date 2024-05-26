#pragma once

//#include "Character.h"
struct Character;

struct Dwarf : Character
{
    Dwarf(std::string name_, int hp_, int armor_);
    const std::string& getName() override;
    //std::string getStats();
private:
    const std::string name;
};
