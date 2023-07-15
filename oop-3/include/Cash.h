#include <iostream>
using namespace std;

#ifndef CASH_H
#define CASH_H



class Cash
{
    public:
        Cash();
        Cash(double cash_value);
        ~Cash();
        void setCashValue();
        double getCashValue();

    private:
        double cash_value;
};

#endif // CASH_H
