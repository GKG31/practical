#include<iostream>
using namespace std;

class student
{
    private:

    int maths,english,science,gujarati,total;
    float percentage;

    public:
    void setdata(int,int,int,int);
    

    void gettotal()
    {   total=maths+english+science+gujarati;
        cout<<"total is:"<<total<<endl;     
    }

    void getpercentage()
    {
        percentage=total/4;
        cout<<"percentage is:"<<percentage;
    }
};

void student::setdata(int a,int b,int c,int d)
{
    maths=a,
    english=b,
    science=c,
    gujarati=d;
    
}

int main()
{
    student t1;
    student t[5];
    int i,a,b,c,d;
    float f;
        for(i=0; i<5; i++)
    {
        cout<<"enter marks of all subject:";
        cin>>a>>b>>c>>d;
        t1.setdata(a,b,c,d);
        t1.gettotal();
        t1.getpercentage();
    }
   
}