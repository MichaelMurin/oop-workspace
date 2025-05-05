#ifndef INVOICE_H
#define INVOICE_H

#include <string>

class Invoice {
    private:
        std::string invoiceID;
        double dollarsOwed;
    public:
        Invoice(std::string invoiceID);
        bool addServiceCost(double costDollars);
        double getDollarsOwed();
        std::string getInvoiceId();
};

#endif