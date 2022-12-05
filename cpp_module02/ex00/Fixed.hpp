#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
    int n;
    static const int m = 8;
    public:
    Fixed();
    Fixed(const Fixed& f);
    Fixed& operator = (const Fixed& f);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
};
#endif