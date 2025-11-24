#include <iostream>
#include <list>
#include <string>
using namespace std;

class Employee
{
public:
    string name;
    unsigned short age;
    float salary;

    Employee(string n, unsigned short a, float s) : name(n), age(a), salary(s) {}
};

int main()
{
    list<Employee> employees;

    employees.push_back(Employee("Ivan", 24, 25500.0f));
    employees.push_front(Employee("Peter", 33, 22000.0f));
    employees.push_back(Employee("Oleksander", 36, 50000.0f));

    auto it = employees.begin();
    advance(it, 1);
    employees.insert(it, Employee("Nataliya", 28, 28000.0f));

    it = employees.begin();
    advance(it, 2);
    employees.erase(it);

    employees.insert(employees.begin(), Employee("Taras", 27, 27000.0f));

    employees.erase(employees.begin());

    cout << "List" << endl;
    for (auto el : employees) {
        cout << "Name: " << el.name << " Age: " << el.age << " Salary: " << el.salary << endl;
    }

    return 0;
}