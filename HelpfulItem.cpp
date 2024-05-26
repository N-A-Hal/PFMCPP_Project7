#include "HelpfulItem.h"
#include "Utility.h"
#include "Character.h"

void HelpfulItem::use(Character *character)
{
    useHelpfulItem(character, this);
}
