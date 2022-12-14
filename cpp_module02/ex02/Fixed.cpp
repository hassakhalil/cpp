#include "Fixed.hpp"

Fixed::Fixed()
{
    this->n = 0; 
    this->type = 0;
}

Fixed::Fixed(const int i)
{
    this->n = i << this->m;
    this->type = 0;
}

Fixed::Fixed(const float f)
{
    float j = 2;
    for (int ex = 1; ex < this->m;ex++)
        j *=2;
    this->n = roundf(f*j);
    this->type = 1;
}

Fixed& Fixed::operator= (const Fixed& f)
{
    this->n = f.getRawBits();
    this->type = f.getType();
    return *this;
}

Fixed::Fixed(const Fixed& f)
{
    *this = f;
}


Fixed::~Fixed()
{
    //std::cout<<"Destructor called"<<std::endl;
}

int Fixed::getRawBits(void) const
{
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
    float pow = 2;
    for (int ex = 1; ex < this->m;ex++)
        pow *=2;
    return this->n/pow;}

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

bool Fixed::operator > (const Fixed& f2)const
{
    if (this->getRawBits() > f2.getRawBits())
        return 1;
    return 0;
}

bool Fixed::operator < (const Fixed& f2)const
{
    if (this->getRawBits() < f2.getRawBits())
        return 1;
    return 0;
}

bool Fixed::operator >= (const Fixed& f2)
{
    if (this->getRawBits() >= f2.getRawBits())
        return 1;
    return 0;
}

bool Fixed::operator <= (const Fixed& f2)
{
    if (this->getRawBits() <= f2.getRawBits())
        return 1;
    return 0;
}

bool Fixed::operator == (const Fixed& f2)
{
    if (this->getRawBits() == f2.getRawBits())
        return 1;
    return 0;
}

bool Fixed::operator != (const Fixed& f2)
{
    if (this->getRawBits() != f2.getRawBits())
        return 1;
    return 0;
}

Fixed Fixed::operator + (const Fixed& f2)
{
    Fixed f;
    f.setRawBits(this->getRawBits() + f2.getRawBits());
    if (this->getType() || f2.getType())
        f.setType(1);
    else
        f.setType(0);
    return f;
}

Fixed Fixed::operator - (const Fixed& f2)
{
    Fixed f;
    if (this->getType() || f2.getType())
        f.setType(1);
    else
        f.setType(0);
    f.setRawBits(this->getRawBits() - f2.getRawBits());
    return f;
}

Fixed Fixed::operator * (const Fixed& f2)
{
    Fixed f;
    long long a = this->getRawBits();
    long long b = f2.getRawBits();
    long long c = a*b;
    c = c>>this->m;
    if (this->getType() || f2.getType())
        f.setType(1);
    else
        f.setType(0);
    f.setRawBits(c);
    return f;
}

Fixed Fixed::operator / (const Fixed& f2)
{
    long long a = this->getRawBits() << 8;
    long long b = f2.getRawBits();
    long long c = a/b;
    int i = c;
    Fixed f;
    if (this->getType() || f2.getType())
        f.setType(1);
    else
        f.setType(0);
    f.setRawBits(i);
    return f;
}
// add  incriment /dicriment operators
Fixed Fixed::operator ++()
{
    this->setRawBits(this->getRawBits() + 1);
    this->setType(1);
    return Fixed(*this);
}

Fixed Fixed::operator --()
{
    this->setRawBits(this->getRawBits() - 1);
    this->setType(1);
    return Fixed(*this);
}
Fixed Fixed::operator ++(int)
{
    Fixed c(*this);
    this->setRawBits(this->getRawBits() + 1);
    this->setType(1);
    return c;
}

Fixed Fixed::operator --(int)
{
    Fixed c(*this);
    this->setRawBits(this->getRawBits() - 1);
    this->setType(1);
    return c;
}


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