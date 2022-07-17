#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_FixedPointValue = 0;
}
// A constructor that takes a constant integer as a parameter.
// It converts it to the corresponding fixed-point value. The fractional bits value is
// initialized to 8 like in exercise 00.
Fixed::Fixed( const int number )
{
	std::cout << "Int constructor called" << std::endl;
	this->_FixedPointValue = number << this->_bits;
}
// A constructor that takes a constant floating-point number as a parameter.
// It converts it to the corresponding fixed-point value. The fractional bits value is
// initialized to 8 like in exercise 00.
Fixed::Fixed( const float fnumber )
{
	 std::cout << "Float constructor called" << std::endl;
	this->_FixedPointValue = (int)(roundf(fnumber * (1 << this->_bits)));
}

Fixed::Fixed( const Fixed &src )
{
	std::cout << "Copy constructor called" << std::endl;
	this->_FixedPointValue = src.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &src)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_FixedPointValue = src.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_FixedPointValue);
}

void Fixed::setRowBits( int const row)
{
	this->_FixedPointValue = row;
}
// A member function float toFloat( void ) const;
// that converts the fixed-point value to a floating-point value.
float	Fixed::toFloat() const
{
	return ((float)this->_FixedPointValue / (1 << this->_bits));
}
// A member function int toInt( void ) const;
// that converts the fixed-point value to an integer value.
int Fixed::toInt() const
{
	return ((int)(this->_FixedPointValue >> this->_bits));
}
// An overload of the insertion («) operator that inserts a floating-point representation
// of the fixed-point number into the output stream object passed as parameter.
std::ostream &operator<<(std::ostream &op, const Fixed &a)
{
	op << a.toFloat();
	return (op);
}