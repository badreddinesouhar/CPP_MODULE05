/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:03:35 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/30 13:12:42 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default bureaucrat") {
    _grade = 1;
    std::cout << "Default constractor" << std::endl;    
}

Bureaucrat::~Bureaucrat() {
    std::cout << this->getName() << " Bureaucrat is destroyed" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name) : _name(name) {
    std::cout << "** " << this->getName() << " ** constractor by name is called" << std::endl;
}

Bureaucrat::Bureaucrat(int grade) {
    if (grade < 1){
        throw GradeTooHighException();
    }
    if (grade > 150) {
        throw GradeTooLowException();
    }
    _grade = grade;
    std::cout << "Constractor by grade is called and it's graded " << this->getGrade() << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name) {
    if (grade < 1){
        throw GradeTooHighException();
    }
    if (grade > 150) {
        throw GradeTooLowException();
    }
    _grade = grade;
    std::cout << "** " << this->getName() << " ** Bureaucrat constractor is called and it's graded " << this->getGrade() << std::endl;;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy._name), _grade(copy._grade) {
    if (_grade < 1){
        throw GradeTooHighException();
    }
    if (_grade > 150) {
        throw GradeTooLowException();
    }
    std::cout << "copy Constractor is called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() < 1){
        throw GradeTooHighException();
    }
    if (bureaucrat.getGrade() > 150) {
        throw GradeTooLowException();
    }
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
    if (_grade < 1){
        throw GradeTooHighException();
    }
    if (_grade > 150) {
        throw GradeTooLowException();
    }
    std::cout << "decrement the grade for " << this->_name << std::endl;
}

void Bureaucrat::setGrade(int grade) {
    if (grade < 1){
        throw GradeTooHighException();
    }
    if (grade > 150) {
        throw GradeTooLowException();
    }
    _grade = grade;
}

void Bureaucrat::gradeIncrement() {
    _grade -= 1;
    if (_grade < 1){
        throw GradeTooHighException();
    }
    if (_grade > 150) {
        throw GradeTooLowException();
    }
    std::cout << "increment the grade for " << this->_name << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too Low";
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat) {
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return out;
}