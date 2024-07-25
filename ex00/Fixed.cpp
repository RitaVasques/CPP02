/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasquesrita <ritavasquesrita@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:00:01 by ritavasques       #+#    #+#             */
/*   Updated: 2024/07/25 13:44:46 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//CONSTRUCTOR & DESTRUCTOR
Fixed::Fixed( void ) {
    std::cout << "Default constructor called" << std::endl;
    this->_fixedPoint = 0;
};

Fixed::Fixed( const Fixed &src ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed( void ) {std::cout << "Destructor called" << std::endl;}

//GETTERS & SETTERS
int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPoint;
}

void Fixed::setRawBits( int const raw ) {
    this->_fixedPoint = raw;
}

//OPERATOR OVERLOAD
Fixed& Fixed::operator=(const Fixed &src) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->setRawBits( src.getRawBits() );
    return (*this);
}
