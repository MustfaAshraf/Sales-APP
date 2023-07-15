#include "OrderItem.h"
#include <iostream>
using namespace std;

OrderItem::OrderItem()
{
    sale_price = 0;
    quantity = 0;
}
OrderItem::OrderItem(double sale_price,double quantity)
{
    this->sale_price = sale_price;
    this->quantity = quantity;
}
OrderItem::~OrderItem()
{

}
void OrderItem::getData()
{
    cout<<"Enter Order price : ";
    cin>>sale_price;
    cout<<endl;
    cout<<"Enter Order Quantity : ";
    cin>>quantity;
    cout<<endl;
}
void OrderItem::print()
{
    cout<<"Order price : "<<sale_price<<endl;
    cout<<"Order Quantity : "<<quantity<<endl;
}
double OrderItem::get_quantity()
{
    return quantity;
}
void OrderItem::updateQuantity(int new_quantity)
{
    quantity = new_quantity;
}
void OrderItem::operator++()
{
    quantity++;
}
void OrderItem::operator++(int)
{
    quantity++;
}
void OrderItem::operator--()
{
    quantity--;
}
void OrderItem::operator--(int)
{
    quantity--;
}
void OrderItem::operator+=(int n)
{
    quantity += n;
}
void OrderItem::operator-=(int n)
{
    quantity -= n;
}
