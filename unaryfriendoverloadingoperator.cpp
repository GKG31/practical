
//unary friend overloading operator

#include<iostream>
using namespace std;
class round
{
    int s,i,p;

    public:

    void setdata(int a, int b, int c)
    {
        s=a;
        i=b;
        p=c;
    }

    int getdata()
    {
        return s+i+p;

    }

    
     friend round operator--(round t)
    {
        round f;
        f.s=--t.s;
        f.i=--t.i;
        f.p=--t.p;
        return f;
    }
    
    friend round operator++(round v)
    {
        round h;
        h.s=++v.s;
        h.i=++v.i;
        h.p=++v.p;
        return h;
    }
};

int main()
{
    round g1,g2,g3;
    g1.setdata(8,8,8);
    cout<<"answer is:"<<g1.getdata()<<endl;
   
    g2= --g1;
    cout<<"after pre decreament g1 is:"<<g2.getdata()<<endl;
    g3= ++g1;
    cout<<"after pre increament g1 is:"<<g3
    .getdata()<<endl;
}
