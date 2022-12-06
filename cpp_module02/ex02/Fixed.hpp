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
    int getType(void) const;
    void setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;
    static Fixed& min(Fixed& f1, Fixed& f2);
    static Fixed& min(const Fixed& f1, const Fixed& f2);
    static Fixed& max(Fixed& f1, Fixed& f2);
    static Fixed& max(const Fixed& f1, const Fixed& f2);

};

std::ostream& operator << (std::ostream& os, const Fixed& f);
bool operator > (const Fixed& f1, const Fixed& f2);
bool operator < (const Fixed& f1, const Fixed& f2);
bool operator >= (const Fixed& f1, const Fixed& f2);
bool operator <= (const Fixed& f1, const Fixed& f2);
bool operator == (const Fixed& f1, const Fixed& f2);
bool operator != (const Fixed& f1, const Fixed& f2);
const Fixed& operator + (const Fixed& f1, const Fixed& f2);
const Fixed& operator - (const Fixed& f1, const Fixed& f2);
const Fixed& operator * (const Fixed& f1, const Fixed& f2);
const Fixed& operator / (const Fixed& f1, const Fixed& f2);
#endif