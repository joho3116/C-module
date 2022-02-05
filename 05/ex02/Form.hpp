/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 17:27:27 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/05 14:52:56 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form {
    private :
        const std::string name;
        bool isSigned;
        const int signGrade;
        const int executeGrade;
        std::string target;
        Form() :name("empty"), signGrade(0), executeGrade(0){};
    public :
        Form(std::string name, int signGrade, int executeGrade);
        ~Form();
        Form(const Form& src);
        Form& operator=(const Form& src);

        const std::string &getName() const;
        bool getSigned() const;
        int getSignGrade() const;
        int getExecuteGrade() const;
        
        void beSigned(Bureaucrat& src);

        const std::string &getTarget() const;
        void setTarget(std::string);
        
        class GradeTooHighException : public std::exception {

            virtual const char* what() const throw() {
                return ("Grade is too high.");
            }
        };

        class GradeTooLowException : public std::exception {
            virtual const char* what() const throw() {
                return ("Grade is too low.");
            }
        };
};
std::ostream& operator<<(std::ostream& out, const Form& src);


#endif