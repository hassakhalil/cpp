#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {
    int n;
    static const int m = 8;
    int type;
    public:
    Fixed();
    Fixed(const int n);
    Fixed(const float n);
    Fixed(const Fixed& f);
    Fixed& operator = (const Fixed& f);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;
    // std::ostream& operator << (std::ostream& os);
};

std::ostream& operator << (std::ostream& os, const Fixed& f);

#endif