#include<iostream>
using namespace std;
class rect
{
    int l,w;
    public:
    void setdata(int a, int b)
    {
        l=a,
        w=b;
    }
    int getdata()
    {
        return l*w;
    }
    friend rect add(rect,rect,rect,rect);
};
    rect add(rect m,rect n,rect x,rect y)
    {
        rect t;
        t.l = m.l + n.l + x.l - y.l;
        t.w = m.w + n.w + x.w - y.w;
        return t;
    }
int main()
{
    rect a,b,c,d,e;
    a.setdata(1,1);
    cout<<"area of rect A is:"<< a.getdata()<<endl;
    b.setdata(2,2);
    cout<<"area of rect B is:"<< b.getdata()<<endl;
    d.setdata(5,5);
    cout<<"area of rect D is:"<< d.getdata()<<endl;
    e.setdata(4,4); 
    cout<<"area of rect E is:"<< e.getdata()<<endl;
    c=add(a,b,d,e);
    cout<<"area of rect C is:"<< c.getdata()<<endl;
}