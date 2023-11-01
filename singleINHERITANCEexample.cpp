#include<iostream>
using namespace std;
class base
{
    protected:
    int a;

    public:
    void setdataA()
    {
        cout<<"enter A: ";
        cin>>a;
    }
};

class derived : public base
{
    int b;
    public:
    void setdataB()
    {
        cout<<"enter B: ";
        cin>>b;
    }

    void getter()
    {
        cout<<"addition of A and B is: "<<a+b<<endl;
    }
};

int main()
{
    derived d;
    d.setdataA();
    d.setdataB();
    d.getter();
}