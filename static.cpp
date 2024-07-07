#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int x = 0;
    void inc()
    {
        x++;
    }
};
int main()
{
    A obj;
    A obj2;
    obj.x = 1;
    obj2.x = 200;
    cout << obj.x << endl;

    cout << obj2.x << endl;
}