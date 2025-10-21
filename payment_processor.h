#ifndef DC_PAYMENTPROCESSOR_HPP_INCLUDED
#define DC_PAYMENTPROCESSOR_HPP_INCLUDED

#include "paymentmode.h"

class PaymentProcessor {
public:
    bool process(PaymentMode mode, double amount);
};

#endif // DC_PAYMENTPROCESSOR_HPP_INCLUDED
