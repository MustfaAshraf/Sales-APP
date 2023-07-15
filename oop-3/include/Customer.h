#include <string>
using namespace std;

#ifndef CUSTOMER_H
#define CUSTOMER_H


class Customer
{
    public:
        Customer();
        Customer(int id,string phone);
        void getData();
        int getCustomerId();
        friend istream&operator>>(istream&input,Customer&c);
        friend ostream&operator<<(ostream&output,Customer&c);
        ~Customer();
        void print();
    private:
        int id;
        string phone;

};

#endif
