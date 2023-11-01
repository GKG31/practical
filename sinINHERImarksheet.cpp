#include<iostream>
using namespace std;
class base
{
    protected:
    int eng,guj,maths;

   /* public:
    void setdataA()
    {
        cout<<"enter guj marks: ";
        cin>>guj;
        cout<<"enter eng marks: ";
        cin>>eng;
        cout<<"enter maths marks: ";
        cin>>maths;
    }*/
};

class derived : public base
{
    int eng,guj,maths,total;
    float per;
    public:
     void setdataA()
    {
        cout<<"enter guj marks: ";
        cin>>guj;
        cout<<"enter eng marks: ";
        cin>>eng;
        cout<<"enter maths marks: "<<endl;
        cin>>maths;
    }
    void totalmarks()
    {   total=eng+guj+maths;
        cout<<"total marks is: "<<total<<endl;
        
    }

    void getpercentage()
    {   per=total/3;
        cout<<"percentage is: "<<per<<endl;
    }
};

int main()
{
    derived d;
    d.setdataA();
    d.totalmarks();
    d.getpercentage();
}