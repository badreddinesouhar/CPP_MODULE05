/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:16:20 by bsouhar           #+#    #+#             */
/*   Updated: 2023/12/01 14:20:50 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        const std::string _name;
        bool index;
        const int gradeIn;
        const int gradeEx;
    public:
        Form();
        ~Form();
        Form(std::string name, int in, int ex);
        Form(const Form& copy);
        Form& operator=(const Form& form);
        const std::string getName() const;
        int getGradeIn() const;
        int getGradeEx() const;
        bool getIndex() const ;
        void beSigned(Bureaucrat& bereaucrat);
        class GradeTooLowException : public std::exception {
          public:
            const char* what() const throw();  
        };
};

std::ostream& operator<< (std::ostream& out, const Form& form);

#endif