#include <bits/stdc++.h>
using namespace std;
// classes are the blue print of the object or they mention the properties of the object

class Teacher
{

    // properties , attributes

    // by default the variables and functions in c++ is private so for making it access from different class we have make it public
private:
    int salary;

public:
    string name;
    string dept;
    string subject;

    // methods , member functions
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    // the private members are  accessible by the  functions which are made public

    // setter function
    void setSalary(int s)
    {
        salary = s;
    }

    // getter function
    int getSalary()
    {
        return salary;
    }
};
int main()
{
    // creation of the object of the class Teacher
    Teacher t1;
    t1.name = "Aditya";
    t1.subject = "Maths";
    t1.dept = "MATH";

    // calling the set function
    t1.setSalary(10);
    cout << t1.name << endl;

    // calling the get function for the given salary
    cout << t1.getSalary() << endl;

    return 0;
}