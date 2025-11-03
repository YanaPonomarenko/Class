#include <iostream>
using namespace std;

class Furniture
{
private:
    string name;
public:
    Furniture() = default;
    Furniture(string n) : name{ n } {}
    string getName() const { return name; }
    void show() const
    {
        cout << "Furniture " << name << endl;
    }
};

class Wall
{
private:
    string color;
public:
    Wall() = default;
    Wall(string c) : color{ c } {}
    string getColor() const { return color; }
    void show() const
    {
        cout << "Wall color " << color << endl;
    }
};

class Room
{
private:
    string name;
    Wall wall; 
    Furniture* furniture;
public:
    Room() : name{ "NoName" }, furniture{ nullptr } {}
    Room(string n, Wall w, Furniture* f) : name{ n }, wall{ w }, furniture{ f } {}
    void show() const
    {
        cout << "Room: " << name << endl;
        wall.show();
        if (furniture)
            cout << "Has furniture  " << furniture->getName() << endl;
        else
            cout << "No furniture" << endl;
    }
};

int main()
{
    Furniture furniture1("Table");
    Room* room1 = new Room("Living Room", Wall("Pink"), &furniture1);
    room1->show();
    delete room1;

    Room* room2 = new Room("Kitchen", Wall("Green"), &furniture1);
    room2->show();
    delete room2;

    return 0;
}