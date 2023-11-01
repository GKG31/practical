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
    


    void depo(int b)
    
    {   int d;
       cout<<"*****WELCOME TO THE WORLD'S BANK*****"; 
       cout<<"\n*****HERE IT IS YOUR DEPOSITE PANEL*****";
        cout<<"\nPLEASE ENTER YOUR DEPOSITE AMOUNT:";
        cin>>d;
        cout<<"Total balance is: "<< b+d<<endl;
       
    }

    int with(int b)
    
    {  int r;
        
        cout<<"enter withdraw amount:";
        cin>>r;
    if(b>=r)
    {
        cout<<" Available balance is:"<<b-r<<endl;
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
    ac1.depo(5000);
    ac1.with(5000);
    

}