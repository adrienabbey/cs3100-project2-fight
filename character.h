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
    Character();
    void print(ostream &);
    void attack(Character &otherCharacter);
    void damage(int amount);
    int getHealth();
    string getName();
    string getRole();
};