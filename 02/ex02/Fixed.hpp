#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int _FixedPointValue;
		static const int _bits = 8;
	public:
		Fixed();
		Fixed( const int number );
		Fixed( const float fnumber );
		Fixed( const Fixed &src );
		~Fixed();
        // The 4 arithmetic operators: +, -, *, and /.
		Fixed & operator = ( const Fixed &src );
		Fixed operator + ( const Fixed &src ) const;
		Fixed operator - ( const Fixed &src ) const;
		Fixed operator * ( const Fixed &src ) const;
		Fixed operator / ( const Fixed &src ) const;

// The 4 increment/decrement (pre-increment and post-increment, pre-decrement and
// post-decrement) operators, that will increase or decrease the fixed-point value from
// the smallest representable  such as 1 +  >
		Fixed & operator ++ ( void ); //pre increment
		Fixed & operator -- ( void ); //pre decrement
		Fixed operator ++ ( int );  //post increment
		Fixed operator -- ( int ); //post decrement
// The 6 comparison operators: >, <, >=, <=, == and !=.
		bool operator > ( const Fixed &src ) const;
		bool operator < ( const Fixed &src ) const;
		bool operator >= ( const Fixed &src ) const;
		bool operator <= ( const Fixed &src ) const;
		bool operator == ( const Fixed &src ) const;
		bool operator != ( const Fixed &src ) const;
// A static member function min that takes as parameters two references on fixed-point
// numbers, and returns a reference to the smallest one.
		static Fixed &min ( Fixed & first, Fixed &second);
// A static member function min that takes as parameters two references to constant
// fixed-point numbers, and returns a reference to the smallest one.
		const static Fixed &min ( const Fixed & first, const Fixed &second);
// A static member function max that takes as parameters two references on fixed-point
// numbers, and returns a reference to the greatest one.
		static Fixed &max ( Fixed & first, Fixed &second);
// A static member function max that takes as parameters two references to constant
// fixed-point numbers, and returns a reference to the greatest one.
		const static Fixed &max ( const Fixed & first, const Fixed &second);

		int getRawBits( void ) const;
		void setRowBits( int const row ) ;
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &op, const Fixed &a);

#endif