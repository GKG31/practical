
//binary friend oprator overloading

#include <iostream>
using namespace std;
class test
{
private:
    int a, b;

public:
    void input()
    {
        cout << "enter value of A and B:";
        cin >> a >> b;   
    }
    friend void find(test t);
};

void find(test t)
{
    if (t.a > t.b)
    {
        cout << "A is largest :";
    }
    else
    {
        cout << "B is largest:" ;
    }
}

int main()
{
    test t;
    t.input();
    find(t);
}
