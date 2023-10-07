#include<iostream>
using namespace std;
class solid
{
    private:
    float side,radius;
    int length,breadth,height;
    
    public:

    solid()
    {
    cout <<"enter value";
    cin>>side;
    }
    void area()
    {
        cout<<"area of square is: "<<4*side*side<<endl;
    }
    void area(double pie,double radius)
    {
        cout<<"area of circle is:"<<4*pie*radius*radius<< endl;
    }
    void area(int length,int breadth,int height)
    {
        cout<<"area of rectangle is: "<<2*height*(length+breadth);
    }
};

int main()
  { 
     solid sld;
  sld.area();
  sld.area(3.14,5);
  sld.area(2,3,5);
    return 0;
  }