/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:03:35 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/30 11:03:17 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default bureaucrat") {
    std::cout << "Default constractor" << std::endl;    
}

Bureaucrat::~Bureaucrat() {
    std::cout << this->getName() << " Bureaucrat is destroyed" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name) : _name(name) {
    std::cout << "** " << this->getName() << " ** constractor by name is called" << std::endl;
}

Bureaucrat::Bureaucrat(int grade) {
    _grade = grade;
    std::cout << "Constractor by grade is called and it's graded " << this->getGrade() << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name) {
    _grade = grade;
    std::cout << "** " << this->getName() << " ** Bureaucrat constractor is called and it's graded " << this->getGrade() << std::endl;;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy._name), _grade(copy._grade) {
    std::cout << "copy Constractor is called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bureaucrat) {
    // this->_name = bureaucrat.getName();
    this->_grade = bureaucrat.getGrade();
    std::cout << "copy assignment operator is called" << std::endl;
    return *this;
}

const std::string Bureaucrat::getName() const {
    return this->_name;
}

int Bureaucrat::getGrade() const {
    return this->_grade;
}

void Bureaucrat::gradeDecrement() {
    _grade += 1;
    std::cout << "decrement the grade for " << this->_name << std::endl;
}

void Bureaucrat::gradeIncrement() {
    _grade -= 1;
    std::cout << "increment the grade for " << this->_name << std::endl;
}
