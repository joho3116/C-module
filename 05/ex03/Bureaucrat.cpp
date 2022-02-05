/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:04:56 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/05 21:32:08 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
    if (this->_grade + amount > 150)
        throw GradeTooHighException();
    this->_grade += amount;
}

void Bureaucrat::decrementGrade(int amount)
{
    if (this->_grade - amount < 1)
        throw GradeTooLowException();
    this->_grade -= amount;
}

void Bureaucrat::signForm(Form& src)
{
    try {
        src.beSigned(*this);
        std::cout << this->_name << " signs " << src.getName() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << this->_name << " can't sign " << src.getName() <<", because " << e.what() << std::endl;
    }
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat& src)
{
    out << src.getName() << ", grade is " << src.getGrade();
    return (out);
}

void Bureaucrat::executeForm(Form const & form)
{
    try {
        form.execute(*this);
        std::cout << this->_name << " executes " << form.getName() << std::endl;
    }
    catch(const std::exception& e) {
        std::cerr << this->_name << " can`t execute " << form.getName() << ". Because " << e.what() << std::endl;
    }
}