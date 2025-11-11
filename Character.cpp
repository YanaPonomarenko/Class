#include <iostream>
using namespace std;

class Character
{
protected:
    string name;
    int health;
    int damage;
public:
    Character(string n, int h, int d) : name(n), health(h), damage(d) {}
    virtual void attack()
    {
        cout << "Character attack" << endl;
    }
    virtual void defend()
    {
        cout << "Character defends" << endl;
    }
};

class Warrior : public Character
{
public:
    Warrior(string n, int h, int d) : Character(n, h, d) {}
    void attack()
    {
        cout << "Warrior " << name << "sword attack" << damage << " damage!" << endl;
    }
    void defend()
    {
        cout << "Warrior " << name << " uses sheild" << endl;
    }
};

class Archer : public Character
{
public:
    Archer(string n, int h, int d) : Character(n, h, d) {}
    void attack()
    {
        cout << "Archer " << name << " shoots" << damage << " damage" << endl;
    }
    void defend()
    {
        cout << "Archer " << name << " dodges" << endl;
    }
};

class Mage : public Character
{
public:
    Mage(string n, int h, int d) : Character(n, h, d) {}
    void attack()
    {
        cout << "Mage " << name << " casts spell" << damage << " damage!" << endl;
    }
    void defend()
    {
        cout << "Mage " << name << "magic barrier" << endl;
    }
};

class BattleArena
{
public:
    void fight(Character* c1, Character* c2)
    {
        cout << "Start" << endl;
        c1->attack();
        c2->attack();
        c1->defend();
        c2->defend();
        cout << "End" << endl;
    }
};

int main()
{
    Character* ch = new Warrior("Steve", 100, 25);
    ch = new Archer("Bill", 80, 30);
    ch = new Mage("Merlin", 70, 35);

    Character* warrior = new Warrior("Peter", 100, 25);
    Character* archer = new Archer("Robin", 80, 30);
    Character* mage = new Mage("Mike", 70, 35);

    BattleArena arena;
    arena.fight(warrior, archer);
    cout << endl;
    arena.fight(warrior, mage);
    cout << endl;
    arena.fight(archer, mage);

    return 0;
}