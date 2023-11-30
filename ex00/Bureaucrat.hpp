/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:23:16 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/30 11:12:06 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
  private:
    const std::string _name;
    int _grade;
  public:
    //orthodox canolical form
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(int grade);
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const std::string name);
    Bureaucrat(const Bureaucrat& copy);
    Bureaucrat& operator=(const Bureaucrat& bureaucrat);
    // getteres
    const std::string getName() const;
    int getGrade() const;
    //increment and decrement functions
    void gradeIncrement();
    void gradeDecrement();
    //exceptions classes
    class GradeTooHighException : public std::exception {
      const char* what() const throw() {
        std::cout << "Grade are too high" << std::endl;
      }
    };
    class GradeTooLowException : public std::exception {
      const char* what() const throw() {
        std::cout << "Grade are too low" << std::endl;
      }
    };
    
};

std::ostream& operator << (std::ostream& out, const Bureaucrat& bereaucrat);

#endif