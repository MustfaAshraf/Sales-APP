#include "Stock.h"
#include "iostream"
#include "cstring"
#include "Order.h"
#include "Product.h"


using namespace std ;

Stock::Stock()
{
    stock_id =0;
    listCount=0;
    counter =0;
    listSize=5;
    ProductList= new Product [listSize];
}
Stock::Stock(int id)
{
    this->stock_id=id;
}

Stock::~Stock()
{
    delete [] ProductList;
}
void Stock :: input()
{
    cout<<"Enter stock id : ";
    cin>>stock_id ;
}

void Stock :: AddStock()
{
    Product *new_product = new Product();
    new_product->getData();
    ProductList[listCount++] = *new_product;

}
void Stock :: UpdataStock(int stock_id,double quantity)
{
    if(listCount==0)
    {
        cout<<"NO STOCK EXIST~!\n";
        return ;
    }
    bool updated=false;
    for(int i=0; i<listCount; ++i)
    {
        if(ProductList[i].getID()==stock_id && order.get_quantity()==quantity)
        {
            ProductList[i].update();

            updated = true;
            break;
        }
    }
    if(updated)
    {
        cout<<"STOCK EDITED SUCESSFULLY!\n";
    }
    else
    {
        cout<<"NO STOCK EXIST\n";
    }

}
void Stock :: DeletStock(int stock_id)
{
    if(listCount==0){
        cout<<"NO STOCK EXIST~!\n";
        return ;
    }
    bool deleted=false;

    for(int i=0;i<listCount;++i){
        if(ProductList[i].getID()==stock_id){
            if(i==listCount-1){
                listCount--;
            }else{
                ProductList[i]= ProductList[listCount-1];
                listCount--;
            }
            deleted = true;
            break;
        }
    }
    if(deleted){
        cout<<"STOCK DELETED SUCESSFULLY!\n";
    }else{
        cout<<"NO STOCK EXIST\n";
    }
}
void Stock::print()
{
    if(listCount==0){
        cout<< "NO STOCK FOUND!\n";
        return;
    }
    for(int i=0;i<listCount;++i){
        ProductList[i].print();
    }
}
double Stock :: GetQuantity()
{
    return order.get_quantity();
}
ostream&operator <<(ostream &output, Stock &s)
{
    output << "Stock id : " << s.stock_id<<endl;
    return output;
}
istream&operator >>(istream &input,Stock &s)
{
    cout<<"Enter Stock id : ";
    input >> s.stock_id;
    cout<<endl;

    return input;
}
