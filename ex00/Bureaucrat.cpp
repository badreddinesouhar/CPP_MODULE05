/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:23:16 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/28 13:03:34 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
  private:
    std::string name;
    int grade;
  public:
    
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat& copy);
    Bureaucrat& operator=(const Bureaucrat& bureaucrat);
    std::string getName();
    int getGrade();
    void increment();
    void decrement();
};

std::ostream& operator << (std::ostream& out, const Bureaucrat& bereaucrat);

#endif