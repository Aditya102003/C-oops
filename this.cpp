#include <bits/stdc++.h>
using namespace std;
class Teacher
{
public:
    string name;
    string dept;
    int salary;

    Teacher(string name, string dept, int salary)
    {
        // this signifies the property of the object when the name is same on both sides

        this->name = name;
        this->dept = dept;
        this->salary = salary;
    }
    // copy conctructor

    // using the & we actually send the original object by sending its adderess .

    Teacher(Teacher &obj)
    {
        cout << "i am copy constructor" << endl;
        this->name = obj.name;
        this->dept = obj.name;
        this->salary = obj.salary;
    }
    // DESTRUCTOR
    ~Teacher()
    {
        cout << "destructor is called " << endl;
    }
};
int main()
{
    Teacher t1("Aditya", "CSE", 35);

    cout << t1.name << " " << t1.salary << endl;
}