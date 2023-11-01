#include<iostream>
using namespace std;

class student
{
    private:

    int maths,english,science,gujarati,total;
    float percentage;

    public:
    void setdata(int,int,int,int,int,float);

    void gettotal()
    {
        
    }

   int m=maths,e=english,s=science,g=gujarati,t=total;
   float p=percentage;

    void gettotal(int m, int e, int s, int g)
    {
    t=m+e+s+g;
    cout<<"total marks:"<<t<<endl;
    }
    void getpercentage(float p)
    {
        p=t/4;
        cout<<"percentage : "<<p<<endl;
    } 
    {
    int maths[5], science[5], english[5],gujarati[5];
    float percentage[5];

        for(int i=0; i<1; i++)
    {
        cout<<"enter marks of maths:";
        cin>>maths[i];

        cout<<"enter marks of science:";
        cin>>science[i];

        cout<<"enter marks of gujarati:";
        cin>>gujarati[i];

        cout<<"enter marks of english:";
        cin>>english[i];

    }
     
    }
    void display()
    {
        cout<<endl<<maths<<science<<gujarati<<english<<total;
    }

};

 int main()
 {
    student s1;
    s1.display();
   /* int maths[5], science[5], english[5],gujarati[5];
    float percentage[5];

    for(int i=0; i<1; i++)
    {
        cout<<"enter marks of maths:";
        cin>>maths[i];

        cout<<"enter marks of science:";
        cin>>science[i];

        cout<<"enter marks of gujarati:";
        cin>>gujarati[i];

        cout<<"enter marks of english:";
        cin>>english[i];

        cout<<"\n";
    }

    for(int i=0; i<1; i++)
    {
        s1.gettotal(maths[i],science[i],gujarati[i],english[i]);

        s1.getpercentage(percentage[i]);
    }*/
    
 }