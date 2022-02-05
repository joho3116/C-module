/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 01:34:18 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/05 21:02:18 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardon", 25, 5)
{
    this->setTarget(target);
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : Form(src.getName(), src.getSignGrade(), src.getExecuteGrade())
{
    *this = src;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& src)
{
    this->Form::operator=(src);
    this->setTarget(src.getTarget());
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const 
{
    checkStatus(executor);
    std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}