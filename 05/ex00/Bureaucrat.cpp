/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:04:56 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/05 23:53:14 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    this->_grade = grade;
    if (grade < 1)
        throw GradeTooLowException();
    if (grade > 150)
        throw GradeTooHighException();
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat::Bureaucrat(const Bureaucrat& src)
{
    *this = src;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src)
{
    this->_grade = src._grade;
    return (*this);
}

const std::string &Bureaucrat::getName() const {
    return (this->_name);
}

int Bureaucrat::getGrade() const {
    return (this->_grade);
}

void Bureaucrat::incrementGrade(int amount)
{
    if (this->_grade - amount < 1)
        throw GradeTooLowException();
    this->_grade -= amount;
}

void Bureaucrat::decrementGrade(int amount)
{

    if (this->_grade + amount > 150)
        throw GradeTooHighException();
    this->_grade += amount;
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat& src)
{
    out << src.getName() << ", grade is " << src.getGrade();
    return (out);
}