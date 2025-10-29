#pragma once
#include <iostream>
#include <string>

using namespace std;

class Laptop
{
private:
    string model;
    float diagonal;
    string manufacturer;
    float weight;

public:
    
    Laptop();

    
    Laptop(string md, float d, string m, float w);

    
    string getModel() const;
    float getDiagonal() const;
    string getManufacturer() const;
    float getWeight() const;

    void setModel(const string& b);
    void setDiagonal(float d);
    void setManufacturer(const string& m);
    void setWeight(float w);

    friend ostream& operator<<(ostream& os, const Laptop& laptop);
};


