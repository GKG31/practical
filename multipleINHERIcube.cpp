#include<iostream>
using namespace std;
class square1
{   
    protected:
    int sq;

    public:
    void setdata()
    {
        cout<<"enter value: ";
        cin>>sq;
    }

};
class square2
{   
    protected:
    int i,sum;

    

};
class root : public square1,public square2

{ 
    public:
   
    void calculate()
    {
        for (i=0; i<sq; i++)
        {
            sum = i*i*i;
            cout<<sum<<"  ";
        }
    }
};

int main()
{
    root r;
    r.setdata();
    r.calculate();

}