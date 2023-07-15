#ifndef STOCK_H
#define STOCK_H
#include "Stock.h"
#include "Product.h"
#include "OrderItem.h"
#include "Order.h"
#include "iostream"



using namespace std ;

class Stock
{
private:
    int stock_id,listCount,listSize,counter;
    Product *ProductList;
    OrderItem order;
    Order or1;


public:
    Stock();
    Stock(int id);
    ~Stock();
    friend istream&operator>>(istream &input,Stock &s);
    friend ostream & operator <<(ostream &output,Stock &s);
    void print();
    void  input();
    void  AddStock();
    void  UpdataStock(int stock_id,double quantity);
    void  DeletStock(int stock_id);
    double  GetQuantity();


};

#endif // STOCK_H
