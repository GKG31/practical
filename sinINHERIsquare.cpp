#include<iostream>
using namespace std;
class square
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

class root : public square
{ 
int i, sum;
    public:
   
    void calculate()
    {
        for (i=0; i<sq; i++)
        {
            sum = i*i;
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