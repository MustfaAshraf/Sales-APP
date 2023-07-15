#include "Transaction.h"

Transaction::Transaction()
{
    transaction_date = "UNKNOWN";
    listSize = 5;
    listCount = 0;
    orderList = new Order[listSize];
}

Transaction::~Transaction()
{
    delete [] orderList;
}
Order o1;
void Transaction::setData()
{
    o1.createOrder();
    cout<<"Enter Transaction Date : ";
    cin>>transaction_date;
    cout<<endl;
}
void Transaction::getOrder(int order_id)
{
    if(listCount==0){
        cout<<"NO ORDER EXIST~!\n";
        return ;
      }
    for(int i=0;i<listCount;++i){
        if(orderList[i].getOrderId()==order_id)
        {
            orderList[i].print();
        }
      }
}
