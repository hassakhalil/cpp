#include "Fixed.hpp"

Fixed::Fixed()
{
    this->n = 0;
    std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const Fixed& f)
{
    std::cout<<"Copy constructor called"<<std::endl;
    this->n = f.getRawBits();
}

Fixed& Fixed::operator= (const Fixed& f)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    this->n = f.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout<<"Destructor called"<<std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout<<"getRawBits member function called"<<std::endl;
    return this->n;
}

void Fixed::setRawBits(int const raw)
{
    this->n = raw;
    std::cout<<"setRawBits member function called"<<std::endl;

}