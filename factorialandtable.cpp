#include <iostream>
using namespace std;
class base
{
    protected:
    int n,factorial=1;
    public:
    void setA()
    {
        cout<<"enter N: ";
        cin>>n;
    }
};
class derived1: public base
{
   
    public:
    void setB()
    {
         for(int i = 1; i<=n; i++) 
        {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial<<endl; 
    }
};
class derived2: public base
{ int sum;
    public:
    void setC()
    {   
        
        for(int i = 1; i <= 10; i++) 
        {   
            sum=n*i;
            cout << n << "*" << i << " = " << sum<<endl;
        }
        
        
    }
};

int main()
{
    derived1 d1;
    d1.setA();
    d1.setB();
   

    derived2 d2;
    d2.setA();
    d2.setC();
   

}