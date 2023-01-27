/* character header for Project 2: FIGHT!
 * Adrien Abbey, CS-3100-02, Jan. 27, 2023
 */

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
    // void print(ostream &) const;
    void print(); // Temporary fix
    void attack(Character &otherCharacter);
    void damage(int amount);
    int getHealth();
    string getName();
    string getRole();
};
