#include "Product.h"
#include <iostream>
using namespace std;

Product::Product(int id, string name, double pr, string cat, int qty)
    : productId(id), productName(name), price(pr), category(cat), quantity(qty) {}

void Product::displayProduct() {
    cout << "Product ID: " << productId << "\n";
    cout << "Name: " << productName << "\n";
    cout << "Price: $" << price << "\n";
    cout << "Category: " << category << "\n";
    cout << "Stock: " << quantity << "\n";
}

void Product::updateStock(int qty) {
    quantity -= qty;
    if (quantity < 0) quantity = 0;
}

int Product::getProductId() {
    return productId;
}

string Product::getProductName() {
    return productName;
}

double Product::getPrice() {
    return price;
}
