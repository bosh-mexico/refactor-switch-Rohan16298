#include "checkout.h"
#include "payment_processor.h"
#include <iostream>

void Checkout::processPayment(PaymentMode mode, double amount) {
    PaymentProcessor processor;
    if (!processor.process(mode, amount)) {
        std::cout << "Invalid payment mode selected!" << std::endl;
    }
}
