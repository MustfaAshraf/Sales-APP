#include "Customer.h"
#ifndef CUSTOMERS_H
#define CUSTOMERS_H


class Customers
{
    public:
        Customers();
        void addCustomer();
        void deleteCustomer(int customer_id);
        void editCustomer(int customer_id);
        void print();
        ~Customers();

    private:
        int list_size,list_count;
        Customer *customerList;
};

#endif
