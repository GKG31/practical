#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string kemcho;

    ifstream filestream("D:/ketan/git/practical/virtualdogexampl.cpp");
    if(filestream.is_open())
    {
        while(getline(filestream,kemcho))
        {
            cout<<kemcho<<endl;
        }
        filestream.close();
    }
    
}