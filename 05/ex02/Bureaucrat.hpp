/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:57:11 by johokyoun         #+#    #+#             */
/*   Updated: 2022/02/05 00:24:33 by johokyoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Form;

class Bureaucrat {
    
    private :
    const std::string _name;
    int _grade;
    
    public :
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& src);
        Bureaucrat& operator=(const Bureaucrat& src);

        const std::string &getName() const;
        int getGrade() const;
        void incrementGrade(int amount = 1);
        void decrementGrade(int apount = 1);

        void signForm(Form& src);
        
    class GradeTooHighException : public std::exception {
        public :
            virtual const char* what() const throw() {
                return ("Exception : Grade is too high.");
            }
    };

    class GradeTooLowException : public std::exception {
        public :
            virtual const char* what() const throw() {
                return ("Exception : Grade is too low.");
            }
    };
};

/* 사용자 지정 에러처리 
std::exception을 상속하여 정의할 수 있음
what이라는 멤버함수를 정의하는데, std::exception에서 정의된 virtual로 명시된 함수를 오버라이딩한 것

const char*를 반환함. std::string 반환이 아니기 때문에 주의해야함
throw : exception을 발생시킬 때, throw를 이용하는데 이 때 throw는 런타임에 이용되는 키워드
throw에 의해 던져진 예외 데이터는, 예외 데이터를 감싸는 try 블록에 감지되어 catch 블록에서 처리한다.
*/

std::ostream& operator<<(std::ostream &out, const Bureaucrat& src);


#endif