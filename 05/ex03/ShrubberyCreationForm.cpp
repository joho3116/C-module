/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 01:33:21 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/05 21:25:27 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreation", 145, 137)
{
    this->setTarget(target);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) : Form(src.getName(), src.getSignGrade(), src.getExecuteGrade())
{
    *this = src;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
    this->Form::operator=(src);
    this->setTarget(src.getTarget());
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    checkStatus(executor);
    std::ifstream in("Tree.txt");
    if (in.is_open())
    {
        std::ofstream out(this->getTarget() + "+shrubbery");
        if (!out.is_open())
            throw std::ofstream::failure("Can`t open " + this->getTarget() + "_shrubbery file.");
        std::string s;
        in.seekg(0, std::ios::end);
        int size = in.tellg();
        s.resize(size);
        in.seekg(0, std::ios::beg);
        in.read(&s[0], size);
        out << s;
    }
    else
        throw std::ifstream::failure("Can`t open input file.");
    
}