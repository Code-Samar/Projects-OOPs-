#ifndef PAYMENT_H
#define PAYMENT_H

#include <string>
using namespace std;

class Payment {
private:
    int paymentId;
    int orderId;
    string paymentStatus;

public:
    Payment(int id, int oid);
    void processPayment();
    string getPaymentStatus();
};

#endif
