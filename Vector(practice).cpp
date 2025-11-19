#include <iostream>
#include <vector>
#include <string>

struct Student 
{
    std::string name;
    unsigned short age;
};
std::ostream& operator<<(std::ostream& os, const Student& student) 
{
    os << "Імя" << student.name << " Вік " << student.age << std::endl;
    return os;
}

int main() {
    std::vector<Student> vec;
    vec.push_back({ "Bob", 22 });
    vec.push_back({ "Alex", 17 });
    vec.push_back({ "Boris", 20 });

    std::cout << "Перший вектор" << std::endl;
    for (auto it = vec.begin(); it != vec.end(); ++it) 
    {
        std::cout << *it;
    }

    std::vector<Student>::iterator it = vec.begin();
    vec.erase(it, it + 2);

    std::cout << "Видалення перших двох:" << std::endl;
    for (auto it = vec.begin(); it != vec.end(); ++it) 
    {
        std::cout << *it;
    }
//нові студенти в кінець
    vec.push_back({ "Boris", 20 });
    vec.push_back({ "Bob", 22 });
    vec.push_back({ "Alex", 17 });
    vec.push_back({ "Alice", 15 });

    std::cout << "після додавання нових студентів" << std::endl;
    for (auto it = vec.begin(); it != vec.end(); ++it) 
    {
        std::cout << *it;
    }
    //видаленя студнта з індексом 2
    vec.erase(vec.begin() + 2);

    std::cout << "Результат" << std::endl;
    for (auto it = vec.begin(); it != vec.end(); ++it) 
    {
        std::cout << *it;
    }

    return 0;
}