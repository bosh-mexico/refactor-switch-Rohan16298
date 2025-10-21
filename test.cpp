#include "checkout.h"
#include "paymentmode.h"
#include <iostream>
#include <cassert>

void testValidPayments() {
    Checkout checkout;
    // Redirect cout to test output if needed, here we just call to ensure no exceptions
    checkout.processPayment(PaymentMode::PayPal, 100.0);
    checkout.processPayment(PaymentMode::GooglePay, 200.0);
    checkout.processPayment(PaymentMode::CreditCard, 300.0);
}

void testInvalidPayment() {
    Checkout checkout;
    checkout.processPayment(PaymentMode::Unknown, 50.0);
}

int main() {
    testValidPayments();
    testInvalidPayment();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
