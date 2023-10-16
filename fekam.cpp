#include <iostream>
using namespace std;
class dmart
{
private:
    int rate, quantity, total=0;
    string name, product[5],mono;
    double gst,cgst=0,sgst=0,bill=0,netbill=0,discount=0;
   
public:

    void title()
    {
    cout << "\t\t\t*DMART READY*\n";
    cout << "____________________________________________\n";
    cout << "\t\t\tBILL\t\t\t\n";
    cout << "____________________________________________";  
    cout << "\nCustomer Name:-";
    cin >> name;
    cout << "\nMobile Number:-";
    cin >> mono;
    }  

    void customerinfo()
    {
    cout << "\n\t*DMART READY*\n";
    cout << "-----------------------------------\n";
    cout << "\t
    BILL\t\t\t\n";
    cout<<"-----------------------------------";
    cout << "\nName          :"<<name;
    cout << "\nContact Number:"<<mono<<"\n";
    cout<<"-----------------------------------";
    }  
    
    int product1()
    {
        cout<<"\n quantity:";
        cin>>quantity;
        product[0]= "AMUL DELICIUS BUTTER =  250";
        total=total+quantity*250;
    }

    int product2()
    {
        cout<<"\n quantity ";
        cin>>quantity;
        product[1]= "AMUL PANEER      =  200";
        total=total+quantity*200;
    }

       int product3()
    {
        cout<<"\n quantity";
        cin>>quantity;
        product[2]= "AMUL CHEESSE      = 440";
        total=total+quantity*440;
    }

    int product4()
    {
        cout<<"\n quantity";
        cin>>quantity;
        product[3]= "AMUL BUTTERMILK     =20";
        total=total+quantity*40;
    }
    
    int product5()
    {
        cout<<"\n quantity";
        cin>>quantity;
        product[4]= "AMUL GOLD MILK    =  40";
        total=total+quantity*40;
    }

    /*int billamt()
    {
        return bill= bill+total; 
    }*/
    
    int givediscount()
{
    if(total>=1000)
    {
        return discount= (total*10)/100;
    }
    else
    {
        return discount=0;
    }
}
    int addGST()
    {
        return gst= (total*5)/100;
       // return cgst= (total*2.5)/100;
    }

    int finalbill()
    {
        return netbill=(total-discount)+gst;
    }
    void final_bill()
    {
       billpri();
       cout<<"\n-----------------------------------";
        cout<<"\nTOTAL ORDER PRICE    :"<<total;
        cout<<"\nDISCOUNT             :"<<givediscount();
       // cout<<"\nCGST                 :"<<cgst;
        cout<<"\nGST                  :"<<addGST();
        cout<<"\nTOTAL PAYABLE AMOUNT :"<<finalbill();
        cout<<"\n\t THANK YOU FOR SHOPPING  \n\t VISIT AGAIN..!!";    
    }
    void billpri()
    {
       for(int i=0; i<5; i++)
       {
       if(!product[i].empty())
        {
            cout<<"\n"<<i+1<<":"<<product[i];
        }
    }
    }
    
};

int main()
{   
    dmart dm;
    dm.title();
    cout<<"___________________________________________________";
    cout<<"\n\t\t******MENU******\n";
    cout<<"___________________________________________________";
    cout<<"\n [1]AMUL DELICIUS BUTTER   =  250";
    cout<<"\n [2]AMUL PANEER            =  200";
    cout<<"\n [3]AMUL CHEESSE           =  440";
    cout<<"\n [4]AMUL BUTTERMILK        =  20";
    cout<<"\n [5]AMUL GOLD MILK         =  40";


    int selectproduct;
    do
    {
        cout<<"\n product number:";
        cin>>selectproduct;
    switch(selectproduct)
    {
        case 1:
            dm.product1();
            break;
        case 2:
            dm.product2();
            break;
        case 3:
            dm.product3();
            break;
        case 4:
            dm.product4();
            break;
        case 5:
            dm.product5();
            break;
        case 0:
            break;
    }
    }
    while(selectproduct!=0);
    dm.customerinfo();
    dm.final_bill();

}    
    
    
