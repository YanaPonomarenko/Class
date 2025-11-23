#include <iostream>
#include <vector>
using namespace std;

class Vechicle
{
public:
    virtual ~Vechicle() = default;
    virtual void describe() const = 0;
};

class ISpeed
{
public:
    virtual ~ISpeed() = default;
    virtual double getMaxSpeed() const = 0;
};

class Car : public Vechicle, public ISpeed
{
private:
    double maxSpeed;
public:
    Car(double maxSpeed) : maxSpeed{ maxSpeed } {}
    void describe() const override
    {
        cout << "car";
    }
    double getMaxSpeed() const override
    {
        return maxSpeed;
    }
};

class Bicycle : public Vechicle, public ISpeed
{
private:
    double maxSpeed;
public:
    Bicycle(double maxSpeed) : maxSpeed{ maxSpeed } {}
    void describe() const override
    {
        cout << "bicycle";
    }
    double getMaxSpeed() const override
    {
        return maxSpeed;
    }
};

class Bus : public Vechicle
{
public:
    Bus() = default;
    void describe() const override
    {
        cout << "bus";
    }
};

void calc(vector<Vechicle*> vechicles)
{
    for (auto el : vechicles)
    {
        el->describe();

        if (ISpeed* obj = dynamic_cast<ISpeed*>(el))
        {
            cout << obj->getMaxSpeed() << endl;
        }
        else
        {
            cout << "Speed not available";
        }
    }
}

int main()
{
    vector<Vechicle*> vechicles;
    vechicles.push_back(new Car(220));
    vechicles.push_back(new Bicycle(50));
    vechicles.push_back(new Bus());

    calc(vechicles);

    for (auto v : vechicles) 
    {
        delete v;
    }

    return 0;
}