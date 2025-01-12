#include "Cart.h"
#include <iostream>
using namespace std;

Cart::Cart(int id, int uid) : cartId(id), userId(uid), totalPrice(0) {}

void Cart::addProduct(Product p) {
    products.push_back(p);
    totalPrice += p.getPrice();
}

void Cart::removeProduct(int productId) {
    for (auto it = products.begin(); it != products.end(); ++it) {
        if (it->getProductId() == productId) {
            totalPrice -= it->getPrice();
            products.erase(it);
            break;
        }
    }
}

void Cart::viewCart() {
    cout << "Cart ID: " << cartId << "\n";
    for (auto& p : products) {
        p.displayProduct();
    }
}

double Cart::calculateTotal() {
    return totalPrice;
}

vector<Product> Cart::getProducts() {
    return products;
}

void Cart::clearCart() {
    products.clear();
    totalPrice = 0;
}
