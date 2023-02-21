#include <iostream>
#include <vector>
using namespace std;

class Book {
    Author author;
    string name, genre, place;
};

class Person {
public:
    string name, email;
    int age;
};

class User : public Person {
    bool isDept;
    vector<Book> bookList;
};

class Author : public Person{
    bool isAlive;
};

class Worker : public Person {
    int salary;
    string place;
};

class Security : public Worker {
    int shift;
};

int main()
{

}

