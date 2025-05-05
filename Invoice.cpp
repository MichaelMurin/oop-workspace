#include "Invoice.h"
#include <string>

Invoice::Invoice(std::string invoiceID) {
    this->invoiceID = invoiceID;
}
bool Invoice::addServiceCost(double costDollars) {
    if (costDollars < 0) {
        return false;
    }
    else {
        dollarsOwed += costDollars;
        return true;
    }
}
double Invoice::getDollarsOwed() {
    return dollarsOwed;
}
std::string Invoice::getInvoiceId() {
    return invoiceID;
}