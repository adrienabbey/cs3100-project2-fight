/* character header for Project 2: FIGHT!
 * Adrien Abbey, CS-3100-02, Jan. 27, 2023
 *
 * Character class header.  Defines private/public class variables and functions.
 */

// Class header guardrails:
//  Source: https://www.learncpp.com/cpp-tutorial/class-code-and-header-files/
#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

using namespace std;

class Character
{
private:
    string name;
    string role;
    int hitPoints;
    int attackBonus;
    int damageBonus;
    int armorClass;

public:
    Character(string newName, string newRole, int newHitPoints, int newAttackBonus, int newDamageBonus, int newArmorClass);
    void print(ostream &) const;
    // void print(); // Temporary fix
    void attack(Character &otherCharacter);
    void damage(int amount);
    int getHealth();
    string getName();
    string getRole();
};

#endif
