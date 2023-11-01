#include<iostream>
using namespace std;
class pet
{
    public:
    virtual void print()
    {
        cout<<"enter voice of animal";
    }
};

class dog:public pet
{
    public:
    void print()override    
    {
        cout<<"dog barks sound"<<endl;
    }
};

class cat:public pet
{
    public:
    void print() override
    {
        cout<<"cat meow sound"<<endl;
    }
};

int main()
{
    pet* mypet;
    dog mydog;
    cat mycat;

    mypet=&mydog;
    mypet->print();
    
    mypet=&mycat;
    mypet->print();
}

