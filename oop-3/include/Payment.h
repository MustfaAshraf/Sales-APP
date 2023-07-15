#include <iostream>
using namespace std;
#ifndef PAYMENT_H
#define PAYMENT_H
#include "Cash.h"
#include "Check.h"
#include "Credit.h"

class Payment
{
    public:
        Payment();
        Payment(string paid_date,double amount);
        ~Payment();
        void input();
        void update();
        void pay();

    private:
        string paid_date;
        double amount;
};

#endif // PAYMENT_H
