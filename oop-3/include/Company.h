#include <string>

using namespace std;

#ifndef COMPANY_H
#define COMPANY_H

#include "Customer.h"


class Company : public Customer
{
    public:
        Company();
        Company(string company_name,string location);
        void getData();
        void print();
        ~Company();

    private:
        string company_name,location;
};

#endif
