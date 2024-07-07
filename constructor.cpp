#include <bits/stdc++.h>
using namespace std;

// whever a new object is created the compiler calls the constructor by its own basiclly it is the inbuilt constrcutor

class Teacher
{
private:
    int salary;

public:
    string name;
    string dept;
    string subject;
    // non-parameterized constructor

    Teacher()
    {
        dept = "CSE";
    }
    Teacher(string n, string d, string s, int sal)
    {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    void setSalary(int s)
    {
        salary = s;
    }
    int getSalary()
    {
        return salary;
    }
};
int main()
{
    // creation of the object of the class Teacher
    Teacher t1;
    Teacher t2("Sharma", "ECE", "C++", 30);
    t1.name = "Aditya";
    t1.subject = "Maths";
    t1.dept = "MATH";
    cout << t1.dept << endl;
    cout << "dd" << endl;
    cout << t2.name << " " << t2.dept << endl;
}