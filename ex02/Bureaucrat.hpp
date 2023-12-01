/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:23:16 by bsouhar           #+#    #+#             */
/*   Updated: 2023/12/01 14:48:39 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
  private:
    const std::string _name;
    int _grade;
  public:
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(int grade);
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const std::string name);
    Bureaucrat(const Bureaucrat& copy);
    Bureaucrat& operator=(const Bureaucrat& bureaucrat);
    const std::string getName() const;
    int getGrade() const;
    void setGrade(int grade);
    void gradeIncrement();
    void gradeDecrement();
    void signForm(AForm& form);
    class GradeTooHighException : public std::exception {
      public:
        const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
      public:
        const char* what() const throw();
    };
};

std::ostream& operator << (std::ostream& out, const Bureaucrat& bereaucrat);

#endif