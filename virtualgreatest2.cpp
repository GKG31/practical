#include<iostream>
using namespace std;


template<class t1,class t2>
t1 sum (t1 a,t2 b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
   
}
int main()
{
    cout<<sum(9.5,17)<<endl;
 //   cout<<sum(1.2,2)<<endl;
}
