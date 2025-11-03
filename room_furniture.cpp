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
        cout << "Furniture: " << name << endl;
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
        cout << "Wall color: " << color << endl;
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
    Room(string n, Wall w) : name{ n }, wall{ w }, furniture{ nullptr } {}

    void setFurniture(Furniture* f) 
    {
        furniture = f;
    }

    void show() const
    {
        cout << "Room: " << name << endl;
        wall.show();
        if (furniture)
            cout << "Has furniture: " << furniture->getName() << endl;
        else
            cout << "No furniture." << endl;
    }
};

int main()
{
    Wall wall1("White");
    Room room1("Living Room", wall1);

    Furniture furniture1("Table");
    room1.setFurniture(&furniture1);
    room1.show();

    cout << "\n--- Demonstrating aggregation ---" << endl;

    Furniture furniture2("Chair");

    Wall wall2("Blue");
    Room room2("Bedroom", wall2);
    room2.setFurniture(&furniture2);
    room2.show();

    Wall wall3("Green");
    Room room3("Kitchen", wall3);
    room3.setFurniture(&furniture2);
    room3.show();

    return 0;
}