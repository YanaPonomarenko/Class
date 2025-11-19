#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Базовий клас Book
class Book
{
protected:
    string title;
    string author;
    int year;
public:
    Book() = default;
    Book(string title, string author, int year) : title{ title }, author{ author }, year{ year } {}

    virtual void read() const {
        cout << "Читання книги: " << title << " автора " << author << endl;
    }

    virtual void display() const {
        cout << title << " | " << author << " | " << year;
    }

    int getYear() const { return year; }
    string getTitle() const { return title; }
    string getAuthor() const { return author; }

    virtual ~Book() {}
};

// Похідний клас Електронна книга
class EBook : public Book
{
private:
    bool isOn;
public:
    EBook() = default;
    EBook(string title, string author, int year) : Book(title, author, year), isOn{ false } {}

    void onOff() {
        isOn = !isOn;
        cout << "Електронна книга '" << title << "' " << (isOn ? "увімкнена" : "вимкнена") << endl;
    }

    void read() const override {
        cout << "Читання електронної книги: " << title;
        if (!isOn) {
            cout << " (попередження: книга вимкнена)";
        }
        cout << endl;
    }

    void display() const override {
        cout << "Е-книга: " << title << " | " << author << " | " << year
            << " | Стан: " << (isOn ? "увімкнена" : "вимкнена");
    }
};

// Похідний клас Друкована книга
class PrintedBook : public Book
{
private:
    int pages;
public:
    PrintedBook() = default;
    PrintedBook(string title, string author, int year, int pages)
        : Book(title, author, year), pages{ pages } {
    }

    void read() const override {
        cout << "Читання друкованої книги: " << title << " (" << pages << " сторінок)" << endl;
    }

    void display() const override {
        cout << "Друк. книга: " << title << " | " << author << " | " << year
            << " | " << pages << " стор.";
    }
};

// Оператор виводу для Book
ostream& operator<<(ostream& out, const Book& book)
{
    book.display();
    return out;
}

int main()
{
    vector<Book*> books;

    // Додаємо книги у вектор
    books.push_back(new EBook("Цифрова фортеця", "Ден Браун", 1998));
    books.push_back(new PrintedBook("Гаррі Поттер", "Дж. К. Роулінг", 1997, 320));
    books.push_back(new EBook("1984", "Джордж Орвелл", 1949));
    books.push_back(new PrintedBook("Володар перснів", "Дж. Р. Р. Толкін", 1954, 1178));

    // Виводимо всі книги
    cout << "=== ВСІ КНИГИ ===" << endl;
    for (auto book : books)
    {
        cout << *book << endl;
    }

    // Знаходимо книгу з найменшим роком випуску
    Book* oldestBook = books[0];
    for (size_t i = 1; i < books.size(); i++)
    {
        if (books[i]->getYear() < oldestBook->getYear())
        {
            oldestBook = books[i];
        }
    }

    cout << "\n=== КНИГА З НАЙМЕНШИМ РОКОМ ВИПУСКУ ===" << endl;
    cout << *oldestBook << endl;

    // Демонстрація методів
    cout << "\n=== ДЕМОНСТРАЦІЯ МЕТОДІВ ===" << endl;

    // Для електронної книги
    EBook* ebook = dynamic_cast<EBook*>(books[0]);
    if (ebook) {
        ebook->onOff(); // Увімкнути
        ebook->read();  // Прочитати
    }

    // Для друкованої книги
    books[1]->read();

    // Очищення пам'яті
    for (auto book : books) {
        delete book;
    }

    return 0;
}