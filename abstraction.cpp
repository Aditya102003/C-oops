#include <bits/stdc++.h>
using namespace std;

// it is giving the blueprint of the child classes
class Shape
{
public:
    // pure virtual function
    virtual void draw() = 0;
};
class Circle : public Shape
{
public:
    void draw()
    {
        cout << "drawing the circle" << endl;
    }
};
int main()
{
    Circle c1;
    c1.draw();
}