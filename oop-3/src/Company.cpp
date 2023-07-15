#include <iostream>
#include "Company.h"
using namespace std;

Company::Company()
{
    company_name = "UNKNOWN";
    location = "UNKNOWN";
}
Company::Company(string company_name,string location)
{
    this->company_name = company_name;
    this->location = location;
}
Company::~Company()
{

}
void Company::getData()
{
    Customer::getData();
    cout<<"Enter Company Name : ";
    cin>>company_name;
    cout<<endl;
    cout<<"Enter Company Location : ";
    cin>>location;
    cout<<endl;
}
void Company::print()
{
    Customer::print();
    cout<<"Company Name : "<<company_name<<endl;
    cout<<"Company Location : "<<location<<endl;
}
