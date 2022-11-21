#ifndef PHOONEBOOK_H
#define  PHOONEBOOK_H
#include "Contact.hpp"

class PhoneBook {
    Contact contacts[8];
    int n;
    public:
    PhoneBook(void);
    void ADD();
    void SEARCH();
};
#endif