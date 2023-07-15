#include <iostream>
using namespace std;

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "Order.h"
#include "Payment.h"

class Transaction
{
    public:
        Transaction();
        ~Transaction();
        void setData();
        void setTransactionDate();
        void getOrder(int order_id);

    private:
        string transaction_date;
        Order * orderList;
        int listSize,listCount;
};

#endif
