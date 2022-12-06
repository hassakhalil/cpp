#include "Fixed.hpp"

Fixed::Fixed()
{
    this->n = 0; 
    this->type =1;
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
    float j = 2^this->m;
    float k = i*j;
    this->n = k;
    this->type = 1;
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
    if (this->type == 0)
        return this->n >>this->m;
    float i = this->n;
    float j = 2^(this->m);
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