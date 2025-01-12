#ifndef ORDER_H
#define ORDER_H

#include <vector>
#include "Product.h"
using namespace std;

class Order {
private:
    int orderId;
    int userId;
    vector<Product> orderItems;
    string orderStatus;

public:
    Order(int id, int uid);
    void placeOrder(Cart& cart);
    void updateOrderStatus(string status);
    void viewOrder();
};

#endif
