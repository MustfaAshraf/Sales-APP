#include "OrderItem.h"
#include <string>
using namespace std;

#ifndef ORDER_H
#define ORDER_H

enum orderStatus {NEW , HOLD , PAID , CANCELED};
class Order
{
    public:
        Order();
        Order(int id,int number,double total);
        void print();
        void printAll();
        void getData();
        void createOrder();
        void updateOrder(int order_id,int status);
        void editOrder(int order_id);
        int getOrderId();
        int getOrderStatue();
        friend istream&operator>>(istream&input,Order&O);
        friend ostream&operator<<(ostream&output,Order&O);
        ~Order();

    private:
        orderStatus o[4];
        Order *orderList;
        OrderItem order;
        int id,number,order_statue,list_count,list_size;
        double total;

};

#endif
