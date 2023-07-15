#ifndef ORDERITEM_H
#define ORDERITEM_H


class OrderItem
{
    public:
        OrderItem();
        OrderItem(double sale_price,double quantity);
        void updateQuantity(int new_quantity);
        void getData();
        double get_quantity();
        void print();
        void operator++();
        void operator++(int);
        void operator--();
        void operator--(int);
        void operator+=(int n);
        void operator-=(int n);
        ~OrderItem();

    private:
        double sale_price,quantity;
};

#endif // ORDERITEM_H
