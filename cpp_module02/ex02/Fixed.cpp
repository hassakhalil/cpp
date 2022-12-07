#include "Fixed.hpp"

Fixed::Fixed()
{
    this->n = 0; 
    this->type = 0;
    std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const int i)
{
    //convert the int to fixed
    std::cout<<"Int constructor called"<<std::endl;
    this->n = i << this->m;
    this->type = 0;
}

Fixed::Fixed(const float f)
{
    //convert the float to fixed
    std::cout<<"Float constructor called"<<std::endl;
    float i = f;
    float j = 256.0;
    float k = roundf(i*j);
    this->n = k;
    this->type = 1;
}

Fixed& Fixed::operator= (const Fixed& f)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    this->n = f.getRawBits();
    this->type = f.getType();
    return *this;
}

Fixed::Fixed(const Fixed& f)
{
    std::cout<<"Copy constructor called"<<std::endl;
    *this = f;
}


Fixed::~Fixed()
{
    std::cout<<"Destructor called"<<std::endl;
}

int Fixed::getRawBits(void) const
{
    // std::cout<<"getRawBits member function called"<<std::endl;
    return this->n;
}

int Fixed::getType(void) const
{
    return this->type;
}

void Fixed::setType( int t){
    this->type = t;
}

void Fixed::setRawBits(int const raw)
{
    this->n = raw;
}

float Fixed::toFloat( void ) const
{
    if (this->type == 0)
        return this->n >>this->m;
    float i = this->n;
    float j = 256.0;
    float k = i/j;
    return k;
}

int Fixed::toInt( void ) const
{
    if (this->type == 1)
        return this->toFloat();
    else
        return this->n >>this->m;
}

std::ostream& operator << (std::ostream& os, const Fixed& f)
{
    os<<f.toFloat();
    return os;
}

bool operator > (const Fixed& f1, const Fixed& f2)
{
    if (f1.getRawBits() > f2.getRawBits())
        return 1;
    return 0;
}

bool operator < (const Fixed& f1, const Fixed& f2)
{
    if (f1.getRawBits() < f2.getRawBits())
        return 1;
    return 0;
}

bool operator >= (const Fixed& f1, const Fixed& f2)
{
    if (f1.getRawBits() >= f2.getRawBits())
        return 1;
    return 0;
}

bool operator <= (const Fixed& f1, const Fixed& f2)
{
    if (f1.getRawBits() <= f2.getRawBits())
        return 1;
    return 0;
}

bool operator == (const Fixed& f1, const Fixed& f2)
{
    if (f1.getRawBits() == f2.getRawBits())
        return 1;
    return 0;
}

bool operator != (const Fixed& f1, const Fixed& f2)
{
    if (f1.getRawBits() != f2.getRawBits())
        return 1;
    return 0;
}

Fixed operator + (const Fixed& f1, const Fixed& f2)
{
    Fixed f;
    if (f1.getType() || f2.getType())
        f.setType(1);
    else
        f.setType(0);
    f.setRawBits(f1.getRawBits() + f2.getRawBits());
    return f;
}

Fixed operator - (const Fixed& f1, const Fixed& f2)
{
    Fixed f;
    if (f1.getType() || f2.getType())
        f.setType(1);
    else
        f.setType(0);
    f.setRawBits(f1.getRawBits() - f2.getRawBits());
    return f;
}

Fixed operator * (const Fixed& f1, const Fixed& f2)
{
    Fixed f;
    long long a = f1.getRawBits();
    long long b = f2.getRawBits();
    long long c = a*b;
    c = c>>8;
    if (f1.getType() || f2.getType())
        f.setType(1);
    else
        f.setType(0);
    f.setRawBits(c);
    return f;
}

Fixed operator / (const Fixed& f1, const Fixed& f2)
{
    long long a = f1.getRawBits() << 8;
    long long b = f2.getRawBits();
    long long c = a/b;
    int i = c;
    Fixed f;
    if (f1.getType() || f2.getType())
        f.setType(1);
    else
        f.setType(0);
    f.setRawBits(i);
    return f;
}
// add  incriment /dicriment operators

//add members
Fixed& Fixed::min(Fixed& f1, Fixed& f2)
{
    if (f1 < f2)
        return f1;
    return f2;
}

const Fixed& Fixed::min(const Fixed& f1, const Fixed& f2)
{
    if (f1 < f2)
        return f1;
    else
        return f2;
}

Fixed& Fixed::max(Fixed& f1, Fixed& f2)
{
  if (f1 > f2)
        return f1;
    return f2;
}

const Fixed& Fixed::max(const Fixed& f1, const Fixed& f2)
{
    if (f1 > f2)
        return f1;
    else
        return f2;
}