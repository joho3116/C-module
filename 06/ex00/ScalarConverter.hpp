/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 22:14:21 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/06 16:15:51 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScalarConverter_HPP
# define ScalarConverter_HPP

# include <iostream>
# include <sstream>
# include <limits>
# include <iomanip>

# define TYPE_CHAR 1
# define TYPE_INT 2
# define TYPE_FLOAT 3
# define TYPE_DOUBLE 4
# define TYPE_FLOAT_IMPOSSIBLE 5
# define TYPE_DOUBLE_IMPOSSIBLE 6

class ScalarConverter
{
private:
	std::string value;
	int			value_size;
	int			type;
	double		d;
	float		f;
	int			i;
	char		c;
	int			precision;
	std::stringstream	doubleStr;
	std::stringstream	floatStr;
	std::stringstream	intStr;
	std::stringstream	charStr;
	ScalarConverter() {}
public:
	ScalarConverter(char *arg);
	~ScalarConverter();
	ScalarConverter(const ScalarConverter&);
	ScalarConverter& operator=(const ScalarConverter&);

	std::string const & getValue() const;
	int getType() const;
	double getDouble() const;
	float getFloat() const;
	int getInt() const;
	char getChar() const;
	int getPrecision() const;
	std::stringstream const & getDoubleStr() const;
	std::stringstream const & getFloatStr() const;
	std::stringstream const & getIntStr() const;
	std::stringstream const & getCharStr() const;

	void convert(ScalarConverter&);
	void parse();
	void typeBranch();
	void charConverter();
	void intConverter();
	void floatConverter();
	void doubleConverter();

	void setCharStream();

	class ArgumentException : public std::exception {
		public :
			virtual const char* what() const throw() {
				return ("Error : Argument.");
			}
	};
};

std::ostream& operator<<(std::ostream& out, ScalarConverter& src);

#endif