#include<iostream>
using namespace std;
class box
{
    int l,w,h;

    public:

    void setdata(int a,int b,int c)
    {
        l=a;
        w=b;
        h=c;
    }

    int getvolume()
    {
        return l*w*h;
    }

    box operator+(box &k)
    {
        box g;
        g.l = l + k.l;
        g.w = w + k.w;
        g.h = h + k.h;
    return g;
    }

    box operator* (box &t)
    {
        box j;
        j.l = l * t.l;
        j.w = w * t.w;
        j.h = h * t.h;
    return j;
    }

    box operator/(box &n)
    {
        box r;
        r.l = l / n.l;
        r.w = w / n.w;
        r.h = h / n.h;
    return r;
    }
};

int main()
{
    box dabbo1,dabbo2,dabbo3,dabbo4,dabbo5;

    dabbo1.setdata(6,6,6);
    cout<<"volume of dabbo1 is:"<<dabbo1.getvolume();
    dabbo2.setdata(3,3,3);
    cout<<"\nvolume of dabbo2 is:"<<dabbo2.getvolume();
    
    dabbo3=dabbo1+dabbo2;
    cout<<"\nvolume of dabbo3 is:"<<dabbo3.getvolume();

    dabbo4=dabbo2*dabbo3;
    cout<<"\nvolume of dabbo4 is:"<<dabbo4.getvolume();
   
    dabbo5=dabbo1/dabbo2;
    cout<<"\nvolume of dabbo5 is:"<<dabbo5.getvolume();
}