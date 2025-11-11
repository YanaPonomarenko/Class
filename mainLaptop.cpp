#include "Laptop.h"
#include <iostream>

using namespace std;

int main() 
{
    Laptop laptop1;
    laptop1.setModel("ASUS");
    laptop1.setDiagonal(11.1);
    laptop1.setManufacturer("ww");
    laptop1.setWeight(2.2);

    Laptop laptop2("Lenovo", 13.0, "qq", 5.5);

    cout << "Laptop1 " << laptop1 << endl;
    cout << "Lptop2 " << laptop2 << endl;
    return 0;
}