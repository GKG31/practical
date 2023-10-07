#include<iostream>
using namespace std;
class square
{
    private: 
    int length;

    public:
   int l=length;
  
   int area(int l)
   {
    return l*l;
   }

   int circ (int l)
   {
    return 4*l;
   }

};
int main()
{
  int a;
  cin>>a;
  square r1;
  cout << r1.area(a)<<endl;
  cout << r1.circ(a);
  return 0;
}