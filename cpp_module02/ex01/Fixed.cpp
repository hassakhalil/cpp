#include "Fixed.hpp"

Fixed::Fixed()
{
    this->n = 0;
    std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const int f)
{
    //convert the int to fixed
    std::cout<<"Int constructor called"<<std::endl;
    this->n = f << this->m;
}

Fixed::Fixed(const float f)
{
    //convert the float to fixed
    std::cout<<"Float constructor called"<<std::endl;
    this->n = f * (2^this->m);
}

Fixed& Fixed::operator= (const Fixed& f)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    this->n = f.getRawBits();
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

void Fixed::setRawBits(int const raw)
{
    this->n = raw;
    // std::cout<<"setRawBits member function called"<<std::endl;

}

float Fixed::toFloat( void ) const
{
    return this->n/(2^this->m);
}

int Fixed::toInt( void ) const
{
    return this->n >>this->m;
}

std::ostream& operator << (std::ostream& os, const Fixed& f)
{
    os<<f.getRawBits();
    return os;
}