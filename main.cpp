/* Adrien Abbey, CS-3100-02, Jan. 27, 2023
 * Project #2: FIGHT!
 * Visual Studio Code Server, Ubuntu 22.04, g++/gdb
 *
 *
 */

#include <iostream>
#include <string>
#include "character.h"

using namespace std;

int main()
{
    // Prompt for a new character:
    cout << "First character's name?" << endl;

    // Create the first character:
    Character firstCharacter = newCharacter();

    // End program:
    return 0;
}

Character newCharacter()
{
    /* Variables */
    string name;
    string role;
    int hitPoints;
    int attackBonus;
    int damageBonus;
    int armorClass;

    // Grab the name from the user:
    cin >> name;

    // Prompt for role:
    cout << endl
         << name << "'s role?" << endl;
    cin >> role;

    // Prompt for hit points:
    cout << endl
         << name << " the " << role << "'s hit points?" << endl;
    cin >> hitPoints;

    // Prompt for attack bonus:
    cout << endl
         << name << " the " << role << "'s attack bonus?" << endl;
    cin >> attackBonus;

    // Prompt for damage bonus:
    cout << endl
         << name << " the " << role << "'s damage bonus?" << endl;
    cin >> damageBonus;

    // Prompt for armor class:
    cout << name << " the " << role << "'s armor class?" << endl;

    Character newCharacter = Character(name, role, hitPoints, attackBonus, damageBonus, armorClass);

    return newCharacter;
}
