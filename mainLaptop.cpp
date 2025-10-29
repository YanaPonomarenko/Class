#include "Laptop.h"
#include <iostream>

using namespace std;

int main() 
{
    Laptop laptop1;
    laptop1.setModel("q");
    laptop1.setDiagonal(11.1);
    laptop1.setManufacturer("w");
    laptop1.setWeight(2.2);

    Laptop laptop2("RR", 13.0, "YY", 5.5);

    cout << "Laptop 1 " << laptop1 << endl;
    cout << "Lptop 2 " << laptop2 << endl;
    return 0;
}