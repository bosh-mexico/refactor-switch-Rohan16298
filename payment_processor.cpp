#include "payment_processor.h"
#include <iostream>

bool PaymentProcessor::process(PaymentMode mode, double amount) {
    switch (mode) {
        case PaymentMode::PayPal:
            std::cout << "Processing PayPal payment of $" << amount << std::endl;
            // Placeholder for PayPal API integration
            return true;
        case PaymentMode::GooglePay:
            std::cout << "Processing GooglePay payment of $" << amount << std::endl;
            // Placeholder for GooglePay API integration
            return true;
        case PaymentMode::CreditCard:
            std::cout << "Processing Credit Card payment of $" << amount << std::endl;
            // Placeholder for Credit Card API integration
            return true;
        default:
            return false;
    }
}
