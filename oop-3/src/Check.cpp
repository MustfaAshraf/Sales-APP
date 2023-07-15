#include "Check.h"
#include <iostream>
using namespace std;

Check::Check()
{
    name = "UNKNOWN";
    bank_id = "UNKNOWN";
}
Check::Check(string name,string bank_id)
{
    this->name = name;
    this->bank_id = bank_id;
}
Check::~Check()
{

}
void Check::setData()
{
    cout<<"Enter your name : ";
    cin>>name;
    cout<<endl;
    cout<<"Enter Bank ID : ";
    cin>>bank_id;
    cout<<endl;
}
