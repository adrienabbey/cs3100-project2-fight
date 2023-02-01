/* Adrien Abbey, CS-3100-02, Jan. 27, 2023
 * Project #2: FIGHT!
 * Visual Studio Code Server, Ubuntu 22.04, g++/gdb
 *
 * Main function for 'FIGHT!'
 * Prompts for input and creates two new characters, then handles basic combat
 * loop logic, ending after declaring a winner.
 */

#include <iostream>
#include <string>
#include "character.h"

using namespace std;

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
     cout << endl
          << name << " the " << role << "'s armor class?" << endl;
     cin >> armorClass;

     Character newCharacter = Character(name, role, hitPoints, attackBonus, damageBonus, armorClass);

     return newCharacter;
}

int main()
{
     // Seed the RNG:
     srand(time(nullptr));

     // Prompt for the first character:
     cout << "First character's name?" << endl;

     // Create the first character:
     Character firstCharacter = newCharacter();

     // Print out the first character's summary:
     firstCharacter.print(cout);

     // Prompt for the second character:
     cout << endl
          << "Second character's name?" << endl;

     // Create the second character:
     Character secondCharacter = newCharacter();

     // Print out the second character's summary:
     secondCharacter.print(cout);

     // These characters exist to do one thing only:
     cout << endl
          << "FIGHT!" << endl;

     // FIGHT!
     while (firstCharacter.getHealth() > 0 && secondCharacter.getHealth() > 0)
     {
          // First character goes first:
          firstCharacter.attack(secondCharacter);

          // Second character only gets a turn if they didn't die already:
          if (secondCharacter.getHealth() > 0)
          {
               secondCharacter.attack(firstCharacter);
          }
     }

     // Announce the victor:
     if (firstCharacter.getHealth() > secondCharacter.getHealth())
     {
          cout << firstCharacter.getName() << " wins!" << endl;
     }
     else if (secondCharacter.getHealth() > firstCharacter.getHealth())
     {
          cout << secondCharacter.getName() << " wins!" << endl;
     }
     else
     {
          cout << endl
               << "SOMETHING WENT WRONG!" << endl;
     }

     // End program:
     return 0;
}
