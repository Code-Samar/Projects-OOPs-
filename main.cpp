#include <iostream>
#include "Product.h"
#include "User.h"
#include "Cart.h"
#include "Order.h"
#include "Payment.h"
using namespace std;

int main() {
    // Create some products
    Product p1(1, "Laptop", 1000, "Electronics", 50);
    Product p2(2, "Shirt", 20, "Clothing", 100);

    // Create a user
    User user1(101, "john_doe", "john@example.com", "password123", "123 Main St");

    // User logs in
    user1.login();

    // Create a shopping cart for the user
    Cart cart(1001, 101);

    // User adds products to the cart
    cart.addProduct(p1);
    cart.addProduct(p2);

    // View the cart
    cart.viewCart();

    // Calculate totalg
    cout << "Total Price: $" << cart.calculateTotal() << "\n";

    // User places an order
    Order order(2001, 101);
    order.placeOrder(cart);

    // Process payment
    Payment payment(3001, 2001);
    payment.processPayment();

    // Update order status
    order.updateOrderStatus("Shipped");

    // View the order
    order.viewOrder();

    return 0;
}
