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
        cout << "largest is:" << t.a;
    }
    else
    {
        cout << "largest is:" << t.b;
    }
}

int main()
{
    test t;
    t.input();
    find(t);
}
