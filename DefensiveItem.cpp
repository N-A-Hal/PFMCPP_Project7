#include "DefensiveItem.h"
#include "Utility.h"
#include "Character.h"

void DefensiveItem::use(Character* character)
{
    useDefensiveItem(character, *this); 
}
