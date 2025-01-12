#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
using namespace std;

class Product {
private:
    int productId;
    string productName;
    double price;
    string category;
    int quantity;

public:
    Product(int id, string name, double pr, string cat, int qty);
    void displayProduct();
    void updateStock(int qty);
    int getProductId();
    string getProductName();
    double getPrice();
};

#endif
