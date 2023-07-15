#include "Payment.h"
#include <iostream>
using namespace std;

Payment::Payment()
{
    paid_date = "UNKNOWN";
    amount = 0;
}
Payment::Payment(string paid_date,double amount)
{
    this->paid_date = paid_date;
    this->amount = amount;
}
Payment::~Payment()
{

}
void Payment::input()
{
    cout<<"Enter Paid Date : ";
    cin>>paid_date;
    cout<<endl;
    cout<<"Enter the Amount : ";
    cin>>amount;
    cout<<endl;
}
void Payment::update()
{
    cout<<"Enter New paid date : ";
    cin>>paid_date;
    cout<<endl;
    cout<<"Enter New Amount : ";
    cin>>amount;
    cout<<endl;
}
Cash c1;
Check c2;
Credit c3;

void Payment:: pay()
{
    cout<< "Choose a way for paying"<<endl;
    cout<<" 1- Cash\n 2- Check\n 3- Credit\n";;
    int type;
    cin>>type;
    switch(type)
    {
    case 1:
        c1.setCashValue();
        break;
    case 2:

        c2.setData();
        break;
    case 3:

        c3.setData();
        break;

    }

}
