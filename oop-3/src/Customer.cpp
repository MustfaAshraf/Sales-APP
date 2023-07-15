#include "Customer.h"
#include <iostream>
using namespace std;

Customer::Customer()
{
    id = 0;
    phone = "UNKNOW";
}
Customer::Customer(int id,string phone)
{
    this->id = id;
    this->phone = phone;
}
void Customer::print()
{
    cout<<"Customer ID : "<<id<<endl;
    cout<<"Customer Phone : "<<phone<<endl;
}
Customer::~Customer()
{

}
void Customer::getData()
{
    cout<<"Enter Customer id : ";
    cin>>id;
    cout<<endl;
    cout<<"Enter Customer Phone : ";
    cin>>phone;
    cout<<endl;
}
int Customer::getCustomerId()
{
    return id;
}
istream&operator>>(istream&input,Customer&c)
{
    cout<<"Enter Customer id : ";
    input >> c.id;
    cout<<"Enter Customer Phone : ";
    input >> c.phone;
    return input;
}
ostream&operator<<(ostream&output,Customer&c)
{
    output << "Customer ID : " << c.id << endl << "Customer Phone : " << c.phone << endl;
    return output;
}
