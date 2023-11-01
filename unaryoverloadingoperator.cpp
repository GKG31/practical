
//unary overloading operator

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
        return s*i+p;

    }

    round operator--(int)
    {
        round e;
        e.s=s--;
        e.i=i--;
        e.p=p--;
        return e;
    }
     round operator--()
    {
        round f;
        f.s=--s;
        f.i=--i;
        f.p=--p;
        return f;
    }
    round operator++(int)
    {
        round g;
        g.s=s++;
        g.i=i++;
        g.p=p++;
        return g;
    }
    round operator++()
    {
        round h;
        h.s=++s;
        h.i=++i;
        h.p=++p;
        return h;
    }
};

int main()
{
    round g1;
    g1.setdata(8,8,8);
    cout<<"answer is:"<<g1.getdata()<<endl;
    g1--;
    cout<<"after post decreament g1 is:"<<g1.getdata()<<endl;
    --g1;
    cout<<"after pre decreament g1 is:"<<g1.getdata()<<endl;
    g1++;
    cout<<"after post increament g1 is:"<<g1.getdata()<<endl;
    ++g1;
    cout<<"after pre increament g1 is:"<<g1.getdata()<<endl;
}
