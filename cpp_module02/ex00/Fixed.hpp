#ifndef FIXED_H
#define FIXED_H

class Fixed {
    int n;
    static const int m = 8;
    public:
    Fixed(): n(0){}
    Fixed(const Fixed& f);
    Fixed& operator = (const Fixed& f);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
};
#endif