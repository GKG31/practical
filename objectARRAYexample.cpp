#include<iostream>
using namespace std;
class test
{
    int a,b;

    public:

    void setdata(int,int);

    void gettotal()
    {
        cout<<"total is:"<< a + b <<endl;
    }
    void getsub()
    {
        cout<<"total is:"<< a - b <<endl;
    }
};

void test::setdata(int y, int z)
{
    a=y, b=z;
}

int main()
{
    test t[5];
    int i,y,z;

    for(i=0; i<5; i++)
    {
        cout<<"enter value of a and b";
        cin>>y>>z;
        t[i].setdata(y,z);
    }

    cout<<endl
        <<endl;
    for(i=0; i<5; i++)
    {
        if(i%2==0)
            t[i].gettotal();
        else
            t[i].getsub();
    }

}