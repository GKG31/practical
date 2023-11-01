#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string str="Skillqode";
    ofstream file("D:/zeel/example.cpp",ios::app);
    if(file.is_open())
    {
        file<<"C language"<<endl;
        file<<"C++ language"<<endl;
        file<<str<<endl;
        file.close();
    }

}