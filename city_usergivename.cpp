#include<iostream>
using namespace std;
class person
 {
    private:
    int age;
    string name, city;

    public:

    void getname()
    {
        cout<<name<<endl;
    }
    void getcity()
    {
        cout<<"\t"<<city<<endl;
    }
    void getage()
    {
        cout<<"\t\t"<<age<<"\n"<<endl;
    }
    void setname(string n)
    {
        name=n;
    }
    void setcity(string c)
    {
        city=c;
    }
    void setage(int a)
    {
        age=a;
    }
    
 };
 int main()
 {
    int i,e[3];
    string q[3] ,w[3] ;
    for(i=0; i<=2;i++)
    {
     
    cout<<"Enter the name: ";
    cin>>q[i];

    cout<<"enter city name: ";
    cin>>w[i];

    cout<<"enter age: ";
    cin>>e[i];
    cout<<("\n");
    }

    person p1;
    p1.setname(q[0]);
    p1.setcity(w[0]);
    p1.setage(e[0]);

    p1.getname();
    p1.getcity();
    p1.getage();
    
    person p2;
    p2.setname(q[1]);
    p2.setcity(w[1]);
    p2.setage(e[1]);

    p2.getname();
    p2.getcity();
    p2.getage();

    person p3;
    p2.setname(q[2]);
    p2.setcity(w[2]);
    p2.setage(e[2]);

    p2.getname();
    p2.getcity();
    p2.getage();
    


 }