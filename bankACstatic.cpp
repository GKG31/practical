#include<iostream>
using namespace std;
class bankAC
{
    public:
    int amt,w,d;
    static int total;

    bankAC(int b)
    {
        amt=b;
        total+=amt;
    }

    void deposit(int a)
    {
        d=a;
        amt= amt+d ;
        total= total+d;
        cout<<"after deposite your amount is :"<<amt<<endl;
    }

    void withdraw(int c)
    {
        w=c;
        if(amt>w)
        {   total=total-w;
            cout<<amt-w<<endl;
            
        }
        else
        {
            cout<<"insufficient balance"<<endl;
        }
       
       // total=total-w;
        cout<<"after withdrawal your amount is :"<<amt<<endl<<endl;
    }

   static void totalbal()
    {
        
        cout<<"total balance is: "<<total<<endl;
    }
};

int bankAC :: total=0;
int main()
{
    bankAC b1(1500);
    bankAC b2(1500);

    b1.deposit(5000);
    b1.withdraw(20000);

    b2.deposit(1000);
    b2.withdraw(5000);

    bankAC::totalbal();
}