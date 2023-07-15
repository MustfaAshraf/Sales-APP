#include "Customers.h"
#include <iostream>
using namespace std;

Customers::Customers()
{
    list_count = 0;
    list_size = 5;
    customerList = new Customer[list_size];
}

Customers::~Customers()
{
    delete [] customerList;
}
void Customers::addCustomer()
{
    Customer *new_customer = new Customer();
    new_customer->getData();
    customerList[list_count++] = *new_customer;
}
void Customers::editCustomer(int customer_id)
{
    if(list_count==0)
    {
        cout<<"NO CUSTOMER EXIST~!\n";
        return ;
    }
    bool edited=false;
    for(int i=0; i<list_count; ++i)
    {
        if(customerList[i].getCustomerId()==customer_id)
        {
            customerList[i].getData();
            edited = true;
            break;
        }
    }
    if(edited)
    {
        cout<<"CUSTOMER EDITED SUCESSFULLY!\n";
    }
    else
    {
        cout<<"NO CUSTOMER EXIST\n";
    }
}
void Customers::deleteCustomer(int customer_id)
{
    if(list_count==0)
    {
        cout<<"NO CUSTOMER EXIST~!\n";
        return ;
    }
    bool deleted=false;

    for(int i=0; i<list_count; ++i)
    {
        if(customerList[i].getCustomerId()==customer_id)
        {
            if(i==list_count-1)
            {
                list_count--;
            }
            else
            {
                customerList[i]= customerList[list_count-1];
                list_count--;
            }
            deleted = true;
            break;
        }
    }
    if(deleted)
    {
        cout<<"CUSTOMER DELETED SUCESSFULLY!\n";
    }
    else
    {
        cout<<"NO CUSTOMER EXIST\n";
    }
}
void Customers::print()
{
    if(list_count==0)
    {
        cout<< "NO CUSTOMER FOUND!\n";
        return;
    }
    for(int i=0; i<list_count; ++i)
    {
        customerList[i].print();
    }
}
