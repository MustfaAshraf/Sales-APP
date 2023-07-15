#include "Cash.h"
#include <iostream>
using namespace std;

Cash::Cash()
{
    cash_value = 0;
}
Cash::Cash(double cash_value)
{
    this->cash_value = cash_value;
}
Cash::~Cash()
{

}
void Cash::setCashValue()
{
    cout<<"Enter Cash Value : ";
    cin>>cash_value;
    cout<<endl;
}
double Cash::getCashValue()
{
    return cash_value;
}
