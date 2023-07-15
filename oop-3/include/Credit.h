#include <iostream>
using namespace std;

#ifndef CREDIT_H
#define CREDIT_H



class Credit
{
    public:
        Credit();
        Credit(string number,string type,string expire_date);
        ~Credit();
        void setData();

    private:
        string number , type , expire_date;

};

#endif // CREDIT_H
