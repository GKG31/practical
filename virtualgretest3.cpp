#include<iostream>
using namespace std;


template<class t1,class t2,class t3>
t1 sum (t1 a,t2 b,t3 c)
{
    if((a>b) && (a>c))
    {
        return a;
    }
    else if (b>c)
    {
        return b;
    }
    else 
    {
        return c;
    }
}
int main()
{
    cout<<sum(9.5,17,6)<<endl;
 //   cout<<sum(1.2,2)<<endl;
}
