#include<iostream>
using namespace std;

class pet
{
  public:

virtual void print()
{

    cout <<"anter sound of animal :";
}
};

class dog : public pet

{
  public:

void print() override
{

    cout <<"dog braks:"<<endl;
}
};

class cat:public pet

{
  public:

void  print() override
{

    cout <<"cat meows:";
}
};

int main()

{

    pet* mypet;

    dog mydog;


    cat mycat;


    mypet = &mydog;
    mypet->print();

    mypet = &mycat;
    mypet->print();


}

