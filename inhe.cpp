#include <iostream>
using namespace std;

class Rect
{
    protected:
    string name;
    public:
    void Setname()
    {
        cout << "Enter YOur Name :";
        cin >> name << endl;
    }
};

class Rect2 : public Rect
{
    protected:
    int num;
    
    public:
    void Setnum()
    {
        cout << "Enter YOur Number :";
        cin >> num << endl;
    }
};

class derived : public Rect2
{
    protected:
    public:
    
};
