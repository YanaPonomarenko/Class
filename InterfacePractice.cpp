#include <iostream>
#include <string>
using namespace std;

class IFlyable
{
public:
    virtual void fly() = 0;
    virtual ~IFlyable() {}
};

class ISwimable
{
public:
    virtual void swim() = 0;
    virtual ~ISwimable() {}
};

class Bird
{
public:
    virtual void eat() = 0;
    virtual void sound() = 0;
    virtual ~Bird() {}
    string color;
    double weight;
};

class Chicken : public Bird
{
public:
    Chicken(string c, double w) 
    {
        color = c;
        weight = w;
    }

    void eat() override 
    {
        cout << "eats grain" << endl;
    }

    void sound() override {
        cout << "ko ko" << endl;
    }
};

class Duck : public Bird, public ISwimable, public IFlyable
{
public:
    Duck(string c, double w) 
    {
        color = c;
        weight = w;
    }

    void eat() override 
    {
        cout << "eats grass" << endl;
    }

    void sound() override {
        cout << "krya krya" << endl;
    }

    void swim() override {
        cout << "duck is swimming in the pond" << endl;
    }

    void fly() override {
        cout << "duck is flying south for winter" << endl;
    }
};

class Penguin : public Bird, public ISwimable
{
public:
    Penguin(string c, double w) 
    {
        color = c;
        weight = w;
    }

    void eat() override 
    {
        cout << "eats fish" << endl;
    }

    void sound() override {
        cout << "..." << endl;
    }

    void swim() override {
        cout << "pnguin is swimming underwater" << endl;
    }
};

class Parrot : public Bird, public IFlyable
{
public:
    Parrot(string c, double w) 
    {
        color = c;
        weight = w;
    }

    void eat() override 
    {
        cout << "eats corn" << endl;
    }

    void sound() override 
    {
        cout << "hello" << endl;
    }

    void fly() override {
        cout << "parrot is flying" << endl;
    }
};

void observeBird(Bird* bird) 
{
    cout << "color: " << bird->color << ", weight: " << bird->weight << "kg" << endl;
    bird->eat();
    bird->sound();
}

int main() {
    Bird* bird = new Chicken("White", 2.2);
    observeBird(bird);
    delete bird;

    bird = new Duck("Grey", 3.2);
    observeBird(bird);
    ((ISwimable*)bird)->swim();
    ((IFlyable*)bird)->fly();
    delete bird;

    bird = new Penguin("Black and White", 4.6);
    observeBird(bird);
    ((ISwimable*)bird)->swim();
    delete bird;

    bird = new Parrot("Yellow", 1.1);
    observeBird(bird);
    ((IFlyable*)bird)->fly();
    delete bird;
    return 0;
}