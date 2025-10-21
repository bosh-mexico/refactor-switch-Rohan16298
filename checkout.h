#ifndef DC_CHECKOUT_HPP_INCLUDED
#define DC_CHECKOUT_HPP_INCLUDED

#include "payment_mode.h"

class Checkout {
public:
    void processPayment(PaymentMode mode, double amount);
};

#endif // DC_CHECKOUT_HPP_INCLUDED
