#include<iostream>
using namespace std;
class base
{
    protected:
    int a;
    public:
    void setA()
    {
        cout<<"enter A: ";
        cin>>a;
    }
};

class derived1 : public base
{
    protected:
    int b;
    public:
    void setB()
    {
        cout<<"enter B:";
        cin>>b;
    }
};

class derived2
{
    protected:
    int c;
    public:
    void setC()
    {
        cout<<"enter c: ";
        cin>>c;
    }
};

class test: public derived1, public derived2
{
    public:
    void product()
    {
        cout<<"product of A, B and C is: "<< a*b+c<<endl;
    }
};

int main()
{
    test t;
    t.setA();
    t.setB();
    t.setC();
    t.product();
}