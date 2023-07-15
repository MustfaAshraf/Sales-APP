#include "Order.h"
#include <iostream>
using namespace std;

Order::Order()
{
    id = 0;
    number = 0;
    list_count = 0;
    list_size = 5;
    order_statue = 1;
    orderList = new Order[list_size];
    total = 0;
}

Order::~Order()
{
    delete [] orderList;
}
void Order::getData()
{
    cout<<"Enter Order ID : ";
    cin>>id;
    cout<<endl;
    cout<<"Enter Order Number : ";
    cin>>number;
    cout<<endl;
    order.getData();
    cout<<"Determine Order Statue : "<<endl
          <<"1. New"<<endl
          <<"2. Hold"<<endl
          <<"3. Paid"<<endl
          <<"4. Canceled"<<endl;
    int i;
    cin>>i;
    order_statue = i;
}
int Order::getOrderStatue()
{
    return order_statue;
}
void Order::createOrder()
{
Order *new_order = new Order();
    new_order->getData();
    orderList[list_count++] = *new_order;
}
int Order::getOrderId()
{
    return id;
}
void Order::updateOrder(int order_id,int status)
{
    if(list_count==0){
        cout<<"NO ORDER EXIST~!\n";
        return ;
      }
      bool updated = false;
      for(int i=0;i<list_count;++i){
        if(orderList[i].getOrderId()==order_id && orderList[i].getOrderStatue()==status)
        {
            int i;
            cout<<"Enter New Order Statue : (New/Hold/Paid/Canceled)"<<endl;
            cin>>i;
            order_statue = i;
            updated = true;
            break;
        }
        if(updated)
            cout<<"PRODUCT UPDATED SUCCESSFULLY!\n";
        else
            cout<<"NO ORDER FOUND!\n";
}
}
void Order::editOrder(int order_id)
{
    if(list_count==0){
        cout<<"NO ORDER EXIST~!\n";
        return ;
      }
      bool edited=false;
      for(int i=0;i<list_count;++i){
        if(orderList[i].getOrderId()==order_id){
            orderList[i].getData();
            edited = true;
            break;
        }
    }
    if(edited){
        cout<<"ORDER EDITED SUCESSFULLY!\n";
    }else{
        cout<<"NO ORDER EXIST\n";
    }
}
void Order::print()
{
    cout<<"Order id : "<<id<<endl;
    cout<<"Order Number : "<<number<<endl;
    order.print();
    cout<<"Order Statue : "<<o[order_statue-1]<<endl;
}
void Order::printAll()
{
    if(list_count==0){
        cout<< "NO ORDER FOUND!\n";
        return;
    }
    for(int i=0;i<list_count;++i){
        orderList[i].print();
    }
}
istream&operator>>(istream&input,Order&O)
{
    cout<<"Enter Order id : ";
    input >> O.id;
    cout<<endl;
    cout<<"Enter Order Number : ";
    input >> O.number;
    cout<<endl;
    return input;
}
ostream&operator<<(ostream&output,Order&O)
{
    output <<"Order ID : "<<O.id<<endl<<"Order Number : "<<O.number<<endl;
    return output;
}
