#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    Person()
    {
        cout << "non-parametrized constructor" << endl;
    }
    Person(string name, int age)
    {
        cout << "parametrized constructor" << endl;
    }
};
int main()
{

    Person p1;
    Person p2("Aditya", 22);
}