#ifndef CART_H
#define CART_H

#include <vector>
#include "Product.h"
using namespace std;

class Cart {
private:
    int cartId;
    int userId;
    vector<Product> products;
    double totalPrice;

public:
    Cart(int id, int uid);
    void addProduct(Product p);
    void removeProduct(int productId);
    void viewCart();
    double calculateTotal();
    vector<Product> getProducts();
    void clearCart();
};

#endif
