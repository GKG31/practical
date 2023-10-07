#include<iostream>
using namespace std;
class triangle
{
    private: 
    int base , heigth;

    public:
   int h=heigth , b=base;
  
   float area(int h,int b)
   {
    return 0.5*b*h;
   }

   int circ (int h,int b)
   {
    return 3*b;
   }

};
int main()
{
  int a,b;
  cin>>a>>b;
  triangle r1;
  cout << r1.area(a,b)<<endl;
  cout << r1.circ(a,b);
  return 0;
}