#pragma once

#include "Item.h"

struct Character;

struct AttackItem : Item
{
    AttackItem() : Item("attack item", 4) { }
    void use(Character* character) override;
};
