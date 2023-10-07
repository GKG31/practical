#include<iostream>
using namespace std;
class marksheet
{
    private:
    int s11,s22,s33,s44,total;
    float percentage;

    public:

    marksheet()
{
    cout<<"enter s11 marks";
    cin>>s11;
    cout<<"enter s22 marks";
    cin>>s22;
    cout<<"enter s33 marks";
    cin>>s33;
    cout<<"enter s44 marks";
    cin>>s44;

    total=s11+s22+s33+s44;
    percentage=total/4;
}
    void showdata()
    {
        cout<<"\ns11\ts22\ts33\ts44\ttotal\tpercentage";
        cout<<"\n"<<s11<<"\t"<<s22<<"\t"<<s33<<"\t"<<s44<<"\t"<<total<<"\t"<<percentage;
    }
};

int main()
{
    marksheet s1;
    s1.showdata();
    return 0;
}