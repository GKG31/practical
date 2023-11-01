#include<iostream>
using namespace std;
class car
{
    
    int i=0;
    
    public:
    static int a;
    car()
    {
        a++;
    }

    void display()
    {
        cout<<"display function call..."<< i << endl;;
    }

    static void Display()
    {
        cout<<"static function call..."<<endl;
    }

};

int car ::a = 0;

int main()
{
    car c1;
    c1.display();

    car c2;
    c2.display();

    car c3;
    c3.display();

    car c4;
    c4.Display();

    cout<<"no. of static using: "<< car:: a << endl;
}