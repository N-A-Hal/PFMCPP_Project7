#include "AttackItem.h"

#include "Utility.h"
#include "Character.h"

void AttackItem::use(Character *character)
{
    useAttackItem(character, this);
}
