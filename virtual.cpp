#include <bits/stdc++.h>
using namespace std;

class Parent
{
public:
    void show()
    {
        cout << "parent class" << endl;
    }
    virtual void hello()
    {
        cout << "hello world" << endl;
    }
};

class Child : public Parent
{
public:
    void show()
    {
        cout << "child class" << endl;
    }
    void hello()
    {
        cout << "hello world from child class" << endl;
    }
};
int main()
{
    Child c1;
    c1.hello();
}