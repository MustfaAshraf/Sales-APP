#include <iostream>
#include "Customer.h"
#include "Customers.h"
#include "Person.h"
#include "Company.h"
#include "Stock.h"
#include "Product.h"
#include "Order.h"
#include "OrderItem.h"
#include "Payment.h"
#include "Cash.h"
#include "Check.h"
#include "Credit.h"
#include "Transaction.h"

using namespace std;

int main()
{
    int c=-1;
    while(c!=0)
    {
        cout<<"\x03Welcome in Sales Application\x03"<<endl;
        cout<<"1. Data Entry "<<endl
            <<"2. Sales Process "<<endl
            <<"3. Print"<<endl
            <<"4. Exit"<<endl<<endl;
        cout<<"Enter Your Choice : ";
        cin>>c;
        switch(c)
        {
        case 1:
            {
            Customers c1;
            Stock s1;
            int k=-1;
            while(k!=0)
            {
                cout<<"1. Add New/edit/Delete Customer"<<endl;
                cout<<"2. Add New/Update/Delete Product in Stock"<<endl
                <<"0.Back to Main Menu"<<endl;
                cin>>k;
                switch(k)
                {
                case 1:
                {
                    int x=-1;
                    while(x!=0)
                    {
                        cout<<"1.Add Customer"<<endl
                            <<"2.Edit Customer"<<endl
                            <<"3.Delete Customer"<<endl
                            <<"0.Back to Main Menu"<<endl;
                        cin>>x;
                        switch(x)
                        {
                        case 1:
                        {
                            c1.addCustomer();
                            break;
                        }
                        case 2:
                        {
                            int id;
                            cout<<"Enter id to edit : ";
                            cin>>id;
                            c1.editCustomer(id);
                            break;
                        }
                        case 3:
                        {
                            int id;
                            cout<<"Enter id to delete : ";
                            cin>>id;
                            c1.deleteCustomer(id);
                            break;
                        }
                        default :
                        {
                            cout<<"Wrong choice, try again!"<<endl;
                            break;
                        }
                        }
                    }
                    break;
                }
                case 2:
                {
                    Stock s1;
                    int y=-1;
                    while(y!=0)
                    {
                        cout<<"1.Add Stock"<<endl
                            <<"2.Update Stock"<<endl
                            <<"3.Delete Stock"<<endl
                            <<"0.Back to Main Menu"<<endl;
                        cin>>y;
                        switch(y)
                        {
                        case 1:
                        {
                            s1.AddStock();
                            break;
                        }
                        case 2:
                        {
                            int id;
                            double quantity;
                            cout<<"Enter id to update : ";
                            cin>>id;
                            cout<<"Enter Quantity to update : ";
                            cin>>quantity;
                            s1.UpdataStock(id,quantity);
                            break;
                        }
                        case 3:
                        {
                            int id;
                            cout<<"Enter id to delete : ";
                            cin>>id;
                            s1.DeletStock(id);
                            break;
                        }
                        default :
                        {
                            cout<<"Wrong choice, try again!"<<endl;
                            break;
                        }
                        }
                    }
                }


                }
            }
            }
        case 2:
            {
                int m=-1;
                while(m!=0)
                {
                    cout<<"1.Add Transaction"<<endl
                    <<"2.Update Order"<<endl
                    <<"3.Pay Order"<<endl
                    <<"0.Back to Main Menu"<<endl<<endl;
                    cout<<"Enter Your Choice : ";
                    cin>>m;
                    switch(m)
                    {
                    case 1:
                        {
                            Customers c1;
                            c1.addCustomer();
                            Order o;
                            o.createOrder();
                            break;
                        }
                    case 2:
                        {
                            int id;
                            double statue;
                            Order o1;
                            cout<<"Enter order id : ";
                            cin>>id;
                            cout<<"Enter Current Statue : ";
                            cin>>statue;
                            o1.updateOrder(id,statue);
                            break;
                        }
                    case 3:
                        {
                            Payment p;
                            p.pay();
                            break;
                        }
                    default :
                        {
                            cout<<"Wrong Choice, try again..."<<endl;
                            break;
                        }
                    }
                }
            }
            case 3:
                {
                    int n= -1;
                    while(n!=0)
                    {
                        cout<<"1.Print Customers"<<endl
                        <<"2.Print Stock Data"<<endl
                        <<"3.Print Transactions"<<endl<<endl;
                        cout<<"Enter Your Choice : ";
                        cin>>n;
                        switch(n)
                        {
                        case 1:
                            {
                               Customers c;
                               c.print();
                               break;
                            }
                        case 2:
                            {
                                Stock s;
                                s.print();
                                break;
                            }
                        case 3:
                            {
                                Order o;
                                Customers c;
                                c.print();
                                o.printAll();
                                break;
                            }
                        default :
                            {
                                cout<<"Wrong Choice, try again..."<<endl;
                            }
                        }
                    }
                }


        }
        }


    return 0;
}
