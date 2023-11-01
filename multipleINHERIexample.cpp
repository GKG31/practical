
//multiple inheritance

#include<iostream>
using namespace std;
class base1
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
class base2
{
    protected:
    int b;

    public:
    void setdataB()
    {
        cout<<"enter b: ";
        cin>>b;
    }
};

class derived : public base1,public base2
{   public:
    void getter()
    {
        cout<<"product of A and B is: "<<a*b<<endl;
    }
};

int main()
{
    derived d;
    d.setdataA();
    d.setdataB();
    d.getter();
}