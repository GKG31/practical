#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a=5;
    int b=5;
    int c= -4;
    int result,result1,result2,result3,result4,result5;

    result= pow(a,b);//square 
    cout<<result<<endl;

    result1=sqrt(b); //square root
    cout<<result1<<endl;

    result2= ceil(a);//roung figure next value
    cout<<result2<<endl;

    result3=floor(a);//round figure back value
    cout<<result3<<endl;

    result4=round(a);//round figure==0.50+///.49
    cout<<result4<<endl;

    result5=abs(c);//
    cout<<result5<<endl;

}