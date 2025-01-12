#include "Order.h"
#include <iostream>
using namespace std;

Order::Order(int id, int uid) : orderId(id), userId(uid), orderStatus("Pending") {}

void Order::placeOrder(Cart& cart) {
    orderItems = cart.getProducts();
    cart.clearCart();
}

void Order::updateOrderStatus(string status) {
    orderStatus = status;
}

void Order::viewOrder() {
    cout << "Order ID: " << orderId << "\n";
    cout << "Order Status: " << orderStatus << "\n";
    for (auto& p : orderItems) {
        p.displayProduct();
    }
}
