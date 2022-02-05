/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 01:33:47 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/05 17:25:15 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequest", 72, 45)
{
    this->setTarget(target);
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) : Form(src.getName(), src.getSignGrade(), src.getExecuteGrade())
{
    *this = src;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& src)
{
    this->Form::operator=(src);
    this->setTarget(src.getTarget());
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    checkStatus(executor);
    if (rand() % 2 == 0)
        std::cout << this->getTarget() << " has been robotomized successfully." << std::endl;
   else
        std::cout << this->getTarget() << " fail to be robotomized." << std::endl;
}