/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:16:20 by bsouhar           #+#    #+#             */
/*   Updated: 2023/12/04 08:00:00 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    private:
        const std::string _name;
        bool index;
        const int gradeIn;
        const int gradeEx;
    public:
        AForm();
        virtual ~AForm();
        AForm(std::string name, int in, int ex);
        AForm(const AForm& copy);
        AForm& operator=(const AForm& form);
        const std::string getName() const;
        int getGradeIn() const;
        int getGradeEx() const;
        bool getIndex() const ;
        void beSigned(Bureaucrat& bereaucrat);
        virtual void execute(Bureaucrat const & executor) = 0;
        class GradeTooLowException : public std::exception {
          public:
            const char* what() const throw();  
        };
};

std::ostream& operator<< (std::ostream& out, const AForm& form);

#endif