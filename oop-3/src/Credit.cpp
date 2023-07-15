#include "Credit.h"
#include <iostream>
using namespace std;

Credit::Credit()
{
    number = "NULL";
    type = "UNKNOWN";
    expire_date = "UNKNOWN";
}
Credit::Credit(string number,string type,string expire_date)
{
    this->number = number;
    this->type = type;
    this->expire_date = expire_date;
}
Credit::~Credit()
{

}
void Credit::setData()
{
    cout<<"Enter Credit Number : ";
    cin>>number;
    cout<<endl;
    cout<<"Enter Expire Date : ";
    cin>>expire_date;
    cout<<endl;
    cout<<"Enter Credit Type : ";
    cin>>type;
    cout<<endl;
}
