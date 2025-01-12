#include "Payment.h"
#include <iostream>
using namespace std;

Payment::Payment(int id, int oid) : paymentId(id), orderId(oid), paymentStatus("Pending") {}

void Payment::processPayment() {
    paymentStatus = "Successful";
    cout << "Payment for Order ID " << orderId << " processed successfully.\n";
}

string Payment::getPaymentStatus() {
    return paymentStatus;
}
