#include <iostream>
using namespace std;

#ifndef CHECK_H
#define CHECK_H


class Check
{
    public:
        Check();
        Check(string name,string bank_id);
        ~Check();
        void setData();

    private:
        string name,bank_id;
};

#endif // CHECK_H
