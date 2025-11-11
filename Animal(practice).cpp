#include <iostream>
using namespace std;

class Animal
{
protected:
    string name;
    float weight;
public:
    Animal() : name("NoName"), weight(0) {}
    Animal(string n, float w) : name(n), weight(w) {}

    void makeSound() const
    {
        cout << "some sound" << endl;
    }
};

class Dog : public Animal
{
private:
    string breed;
    unsigned short age;
public:
    Dog(string n, float w, string b, unsigned short a) : Animal(n, w)
    {
        this->breed = b;
        this->age = a;
    }

    void makeSound() const
    {
        cout << "woof woof" << endl;
    }
};

class Cat : public Animal
{
private:
    string color;
public:
    Cat(string n, float w, string c) : Animal(n, w)
    {
        this->color = c;
    }

    void makeSound()
    {
        cout << "meow meow" << endl;
    }
};
int main()
{
    Dog dog1{ "Luna", 12.4, "labrador", 2 };
    Cat cat1{ "Milka", 4.0, "White" };

    cout << "Dog sound";
    dog1.makeSound();
    cout << "Cat sound";
    cat1.makeSound();
    return 0;
}