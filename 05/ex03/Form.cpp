/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 18:15:10 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/05 21:33:33 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int signGrade, int executeGrade) : name(name), signGrade(signGrade), executeGrade(executeGrade) {
    this->isSigned = false;
}

Form::~Form() {
}

Form::Form(const Form& src) : name(src.getName()), signGrade(src.getSignGrade()), executeGrade(src.getExecuteGrade()) 
{
    *this = src;
}

Form& Form::operator=(const Form& src)
{
    this->isSigned = src.getSigned();
    return (*this);
}

const std::string &Form::getName() const
{
    return(this->name);
}

bool Form::getSigned() const {
    return (this->isSigned);
}

int Form::getSignGrade() const {
    return (this->signGrade);
}

int Form::getExecuteGrade() const {
    return (this->executeGrade);
}

void Form::beSigned(Bureaucrat& src) {
    if (src.getGrade() < this->getSignGrade())
        this->isSigned = true;
    else
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& out, const Form& src) {
    out << src.getName() <<", SignGrade: " << src.getSignGrade() << ", ExcuteGrade: " << src.getExecuteGrade() << ", IsSigned? :" << src.getSigned() << std::endl;
    return (out);
}

const std::string &Form::getTarget() const
{
    return (this->target);
}

void Form::setTarget(std::string target)
{
    this->target = target;
}

void Form::checkStatus(const Bureaucrat& src) const{
    if (!this->isSigned)
        throw NoSignException();
    if (this->executeGrade < src.getGrade())
        throw GradeTooLowException();
    
}