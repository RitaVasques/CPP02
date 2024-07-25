/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasquesrita <ritavasquesrita@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:00:17 by ritavasques       #+#    #+#             */
/*   Updated: 2024/07/25 13:30:10 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
    private:
        int _fixedPoint;
        static const int _fracBits = 8;
    public:
        Fixed( void );
        Fixed ( const Fixed &src );
        ~Fixed( void );

        Fixed& operator=( const Fixed &src);

        int getRawBits( void ) const;
        void setRawBits( int const raw);
};

#endif