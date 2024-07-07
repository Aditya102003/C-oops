#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    // for calling this constructor we have to call this constructor in the child class

    Person(string name, int age)
    {
        this->age = age;
        this->name = name;
    }
    Person()
    {
        cout << "Parent class" << endl;
    }
    ~Person()
    {
        cout << "Parent class destuctor" << endl;
    }
};

class Student : public Person
{
public:
    int roll_no;
    // way of initilaisation of the paramtrized constructor
    Student(string name, int age, int roll_no) : Person(name, age)
    {
        this->roll_no = roll_no;
        cout << "child class" << endl;
    }
    void getInfo()
    {
        cout << name << " " << age << " " << roll_no << endl;
    }
    ~Student()
    {
        cout << "child class destructor" << endl;
    }
};

int main()
{
    Student s1("Aditya", 22, 115);

    cout << s1.name << " " << s1.age << " " << s1.roll_no << endl;
}