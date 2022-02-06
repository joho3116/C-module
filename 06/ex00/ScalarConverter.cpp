/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 22:14:10 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/06 16:15:36 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(char *arg) {
	this->value = arg;
	this->value_size = this->value.size();
	this->type = TYPE_INT;
	this->d = 0;
	this->f = 0;
	this->i = 0;
	this->c = 0;
	this->precision = -1;
}

ScalarConverter::~ScalarConverter() {
}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {
	*this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
	this->value = other.getValue();
	this->value_size = this->value.size();
	this->type = other.getType();
	this->d = other.getDouble();
	this->f = other.getFloat();
	this->i = other.getInt();
	this->c = other.getChar();
	this->precision = other.getPrecision();
	this->doubleStr.str("");
	this->doubleStr << other.getDoubleStr();
	this->floatStr.str("");
	this->floatStr << other.getFloatStr();
	this->intStr.str("");
	this->intStr << other.getIntStr();
	this->charStr.str("");
	this->charStr << other.getCharStr();
	return (*this);
}

std::string const & ScalarConverter::getValue() const {
	return (this->value);
}

int ScalarConverter::getType() const {
	return (this->type);
}

double ScalarConverter::getDouble() const {
	return (this->d);
}

float ScalarConverter::getFloat() const {
	return (this->f);
}

int ScalarConverter::getInt() const {
	return (this->i);
}

char ScalarConverter::getChar() const {
	return (this->c);
}

int ScalarConverter::getPrecision() const {
	return (this->precision);
}

std::stringstream const & ScalarConverter::getDoubleStr() const {
	return (this->doubleStr);
}

std::stringstream const & ScalarConverter::getFloatStr() const {
	return (this->floatStr);
}

std::stringstream const & ScalarConverter::getIntStr() const {
	return (this->intStr);
}

std::stringstream const & ScalarConverter::getCharStr() const {
	return (this->charStr);
}

void ScalarConverter::parse() {

	if (this->value.compare("inf") == 0			\
		|| this->value.compare("+inf") == 0		\
		|| this->value.compare("-inf") == 0		\
		|| this->value.compare("nan") == 0) {
			this->type = TYPE_DOUBLE_IMPOSSIBLE;
			return ;
	}
	else if (this->value.compare("inff") == 0	\
		|| this->value.compare("+inff") == 0	\
		|| this->value.compare("-inff") == 0	\
		|| this->value.compare("nanf") == 0) {
			this->type = TYPE_FLOAT_IMPOSSIBLE;
			return ;
	}

	if (this->value_size == 1 && isalpha(this->value[0])) {
		this->type = TYPE_CHAR;
		return ;
	}

	int i = 0;
	int idxPoint;
	if ((idxPoint = this->value.find(".")) == -1) {
		if (this->value[0] == '+' || this->value[0] == '-') {
			i = 1;
		}
		for ( ; i < this->value_size ; i++) {
			if (!isdigit(this->value[i]))
				throw ArgumentException();
		}
		this->type = TYPE_INT;
	}
	else {
		if (this->value[0] == '+' || this->value[0] == '-') {
			i = 1;
		}
		for ( ; i < this->value_size ; i++) {
			if (i == idxPoint) {
				this->precision = 0;
				continue ;
			}
			if (!isdigit(this->value[i]) && (i != (value_size - 1)))
				throw ArgumentException();
			if (isdigit(this->value[i]) && this->precision >= 0)
				this->precision++;
		}
		if (this->value[value_size - 1] == 'f')
			this->type = TYPE_FLOAT;
		else if (!isdigit(this->value[value_size - 1]) && this->value[value_size - 1] != 'f')
			throw ArgumentException();
		else
			this->type = TYPE_DOUBLE;
	}
}

void ScalarConverter::setCharStream() {
	if (this->i < 0 || this->i > 127) {
		this->charStr << "char: impossible";
	}
	else {
		if ((this->i >= 0 && this->i <= 8) || (this->i >= 14 && this->i <= 31) || this->i == 127)
			this->charStr << "char: Non displayable";
		else {
			this->charStr << "char: '" << this->c << "'";
		}
	}
}

void ScalarConverter::charConverter() {
	this->c = this->value[0];
	this->i = static_cast<int>(this->c);
	this->f = static_cast<float>(this->c);
	this->d = static_cast<double>(this->c);
	this->charStr << "char: " << this->c;
	this->intStr << "int: " << this->i;
	this->floatStr << "float: " << this->f << ".0f";
	this->doubleStr << "double: " << this->d << ".0";
}

void ScalarConverter::intConverter() {
	long lvalue;

	lvalue = atol(this->value.c_str());
	if (lvalue < std::numeric_limits<int>::min() || lvalue > std::numeric_limits<int>::max()) {
		this->f = static_cast<float>(lvalue);
		this->d = static_cast<double>(lvalue);
		this->charStr << "char: impossible";
		this->intStr << "int: impossible";
	}
	else {
		this->i = atoi(this->value.c_str());
		this->c = static_cast<char>(this->i);
		this->f = static_cast<float>(this->i);
		this->d = static_cast<double>(this->i);
		this->setCharStream();
		this->intStr << "int: " << this->i;
	}
	this->floatStr << "float: " << this->f << ".0f";
	this->doubleStr << "double: " << this->d << ".0";
}

void ScalarConverter::floatConverter() {
	this->f = atof(this->value.c_str());
	this->c = static_cast<char>(this->f);
	this->i = static_cast<int>(this->f);
	this->d = static_cast<double>(this->f);
	if (this->f < std::numeric_limits<int>::min() || this->f > std::numeric_limits<int>::max())
		this->type = TYPE_FLOAT_IMPOSSIBLE;
	if (this->type == TYPE_FLOAT_IMPOSSIBLE) {
		this->charStr << "char: impossible";
		this->intStr << "int: impossible";
		this->floatStr << "float: " << this->f << "f";
		this->doubleStr << "double: " << this->d;
		return ;
	}
	this->setCharStream();
	this->intStr << "int: " << this->i;
	if (this->f > this->i || this->f < this->i) {
		this->floatStr << "float: " << std::fixed << std::setprecision(this->precision) << this->f << "f";
		this->doubleStr << "double: " << std::fixed << std::setprecision(this->precision) << this->d;
	}
	else {
		this->floatStr << "float: " << this->f << ".0f";
		this->doubleStr << "double: " << this->d << ".0";
	}
}

void ScalarConverter::doubleConverter() {
	this->d = atof(this->value.c_str());
	this->c = static_cast<char>(this->d);
	this->i = static_cast<int>(this->d);
	this->f = static_cast<float>(this->d);
	if (this->f < std::numeric_limits<int>::min() || this->f > std::numeric_limits<int>::max())
		this->type = TYPE_DOUBLE_IMPOSSIBLE;
	if (this->type == TYPE_DOUBLE_IMPOSSIBLE) {
		this->charStr << "char: impossible";
		this->intStr << "int: impossible";
		this->floatStr << "float: " << this->f << "f";
		this->doubleStr << "double: " << this->d;
		return ;
	}
	this->setCharStream();
	this->intStr << "int: " << this->i;
	if (this->f > this->i || this->f < this->i) {
		this->floatStr << "float: " << std::fixed << std::setprecision(this->precision) << this->f << "f";
		this->doubleStr << "double: " << std::fixed << std::setprecision(this->precision) << this->d;
	}
	else {
		this->floatStr << "float: " << this->f << ".0f";
		this->doubleStr << "double: " << this->d << ".0";
	}
}

void ScalarConverter::typeBranch() {
	switch (this->type)
	{
	case TYPE_CHAR:
		this->charConverter();
		break ;
	case TYPE_INT:
		this->intConverter();
		break ;
	case TYPE_FLOAT:
	case TYPE_FLOAT_IMPOSSIBLE:
		this->floatConverter();
		break ;
	case TYPE_DOUBLE:
	case TYPE_DOUBLE_IMPOSSIBLE:
		this->doubleConverter();
		break ;
	}
}

void ScalarConverter::convert(ScalarConverter& s) {
	try {
		s.parse();
		s.typeBranch();
	}
	catch (std::exception &e) {
		throw ArgumentException();
	}
}

std::ostream& operator<<(std::ostream& out, ScalarConverter& src) {
	try {
		src.convert(src);
		out << src.getCharStr().str() << '\n' << src.getIntStr().str() << '\n' << src.getFloatStr().str() << '\n' << src.getDoubleStr().str();
	}
	catch (std::exception &e) {
		out << e.what();
	}
	return (out);
}