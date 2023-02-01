/* character class for Project 2: FIGHT!
 * Adrien Abbey, CS-3100-02, Jan. 27, 2023
 *
 * Character class file.  Contains class constructor and functions.
 */

#include <iostream>
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

void Character::print(ostream &os) const
{
    // Print out the character sheet:

    os << endl
       << "Character summary" << endl;
    os << "-----------------" << endl;
    os << name << " the " << role << endl;
    os << "HP: " << hitPoints << endl;
    os << "AB: " << attackBonus << endl;
    os << "DB: " << damageBonus << endl;
    os << "AC: " << armorClass << endl;
}

// Temporary function:
// void Character::print()
// {
//     // Print out the character sheet:

//     cout << endl
//          << "Character summary" << endl;
//     cout << "-----------------" << endl;
//     cout << name << " the " << role << endl;
//     cout << "HP: " << hitPoints << endl;
//     cout << "AB: " << attackBonus << endl;
//     cout << "DB: " << damageBonus << endl;
//     cout << "AC: " << armorClass << endl;
// }

// Attack another character.
void Character::attack(Character &otherCharacter)
{
    // Announce the attacker:
    cout << name << " attacks!" << endl;

    // Roll a 20-sided die:
    int attackRoll = (rand() % 20) + 1;
    int attackTotal = attackRoll + attackBonus;

    // Display attack roll result:
    cout << "Attack roll: " << attackRoll << " + " << attackBonus << " = " << attackTotal << " vs. " << otherCharacter.armorClass;

    // Check if the attack hits:
    if (attackTotal >= otherCharacter.armorClass)
    {
        // The attack hits:
        cout << " --> HIT!" << endl;

        // Roll a 10-sided die:
        int damageRoll = (rand() % 20) + 1;
        int damageTotal = damageRoll + damageBonus;

        // Display damage roll result:
        cout << "Damage: " << damageRoll << " + " << damageBonus << " = " << damageTotal << endl;

        // Apply damage:
        otherCharacter.damage(damageTotal);

        // Display otherCharacter's remaining health:
        cout << otherCharacter.getName() << " has " << otherCharacter.getHealth()
             << " hit points remaining." << endl
             << endl;
    }
    else
    {
        // The attack misses:
        cout << " --> MISS!" << endl
             << endl;
    }
}

// Subtract the given amount from this character's current hit points.
void Character::damage(int amount)
{
    hitPoints = hitPoints - amount;
    if (hitPoints < 0)
    {
        hitPoints = 0;
    }
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
