#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;
#include <Customer.h>


class Person : public Customer
{
    public:
        Person();
        Person(string billing_address,string full_name);
        void getData();
        void print();
        ~Person();

    private:
        string billing_address,full_name;
};

#endif
