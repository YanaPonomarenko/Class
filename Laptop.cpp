#include "Laptop.h"

Laptop::Laptop()
{
    model = "";
    diagonal = 0.0;
    manufacturer = "";
    weight = 0.0;
}

Laptop::Laptop(string md, float d, string m, float w)
{
    model = md;
    diagonal = d;
    manufacturer = m;
    weight = w;
}

string Laptop::getModel() const
{
    return model;
}

float Laptop::getDiagonal() const
{
    return diagonal;
}

string Laptop::getManufacturer() const
{
    return manufacturer;
}

float Laptop::getWeight() const
{
    return weight;
}

void Laptop::setModel(const string& md)
{
    model = md;
}

void Laptop::setDiagonal(float d)
{
    diagonal = d;
}

void Laptop::setManufacturer(const string& m)
{
    manufacturer = m;
}

void Laptop::setWeight(float w)
{
    weight = w;
}

ostream& operator<<(ostream& os, const Laptop& laptop)
{
    cout << "brand: " << laptop.model;
    cout << "diagonal: " << laptop.diagonal;
    cout << "manufacturer: " << laptop.manufacturer;
    cout << "weight: " << laptop.weight;
}
