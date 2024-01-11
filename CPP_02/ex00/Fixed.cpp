#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &value_2)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = value_2.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &value_2)
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = value_2.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}