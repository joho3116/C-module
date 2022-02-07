/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:45:16 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/07 13:15:52 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


// int main()
// {
//     int iArr[] = {1,2,3,4,5};
//     char cArr[] = {'a','b','c','d','e'};
    
//     iter(iArr, 5, printT);
//     iter(cArr, 5, printT);

//     return (0);
// }

class Awesome
{
public:
Awesome( void ) : _n( 42 ) { return; }
int get( void ) const { return this->_n; }
private:
int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }
int main() {
int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
Awesome tab2[5];
iter( tab, 5, print);
iter( tab2, 5, print);
return 0;
}