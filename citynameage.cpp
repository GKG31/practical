#include<iostream>
using namespace std;
class person
{
    private:
    int age;
    string name,city;

    public:
    
    
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
    void getage()
    {
        cout<<age<<endl;
    }
    void getcity()
    {
        cout<<city<<endl;
    }void getname()
    {
        cout<<name<<endl;
    }
};
   int main()
{
    int a;
    string b,c;

    person human;
    human.setage(23);
    human.setname("ketan");
    human.setcity("surat");

    
    human.getage();
    human.getname();
    human.getcity();
    
}