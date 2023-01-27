/* character class for Project 2: FIGHT!
 * Adrien Abbey, CS-3100-02, Jan. 27, 2023
 */

#include "character.h"

using namespace std;

/* Constructors */

Character::Character(string newName, string newRole, int newHitPoints,
                     int newAttackBonus, int newDamageBonus, int newArmorClass)
{
    name = newName;
    role = newRole;
    hitPoints = newHitPoints;
    attackBonus = newAttackBonus;
    damageBonus = newDamageBonus;
    armorClass = newArmorClass;
}

/* Functions */

void Character::print(ostream &) const
{
    // Fixme!
}

// Attack another character.
void attack(Character &otherCharacter)
{
}

// Subtract the given amount from this character's current hit points.
void damage(int amount)
{
}

// Return the character's current health:
int Character::getHealth()
{
    return hitPoints;
}

// Return the character's name:
string Character::getName()
{
    return name;
}
