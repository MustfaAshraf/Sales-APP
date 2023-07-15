#include "Person.h"
#include <iostream>
using namespace std;

Person::Person()
{
    billing_address = "UNKNOWN";
    full_name = "UNKNOWN";
}
Person::Person(string billing_address,string full_name)
{
    this->billing_address = billing_address;
    this->full_name = full_name;
}
Person::~Person()
{

}
void Person::getData()
{
    Customer::getData();
    cout<<"Enter Person Full Name : ";
    cin>>full_name;
    cout<<endl;
    cout<<"Enter Person Address : ";
    cin>>billing_address;
    cout<<endl;
}
void Person::print()
{
    Customer::print();
    cout<<"Person Full Name : "<<full_name<<endl;
    cout<<"Person Address : "<<billing_address<<endl;
}
