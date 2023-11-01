#include<iostream>
using namespace std;
class bankaccount
{
    private:
    int bal,dep,req;

    public:

    bankaccount(int b, int d, int r)
 {
    bal=b;
    dep=d;
    req=r;
   // cout<<"enter amount";
   // cin>>bal;
    //cout<<"enter amount";
   // cin>>dep;
   // cout<<"enter amount";
   // cin>>req;
 }
    int depo(int b,int d)
    
    {
       // cout<<"enter amount:";
       // cin>>b;
        cout<<"enter amount:";
        cin>>d;
        cout<<"Total amount is: "<< b+d<<endl;
       
    }

    int with(int b,int r)
    
    {
        
        cout<<"enter amount:";
        cin>>r;
    if(b>=r)
    {
        cout<<"balance available is:"<<b-r<<endl;
    }
    else 
    {
        cout<<"you have not sufficient balance";
    }
    }

};

int main()
{ 
    int a,b,c;
    bankaccount ac1(a,b,c);
    ac1.depo(500,0);
    ac1.with(500,0);
    

}