/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:16:24 by bsouhar           #+#    #+#             */
/*   Updated: 2023/12/06 15:03:10 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name(""), gradeIn(0) , gradeEx(0){
    this->index = false;
    std::cout << "Form default constracror"  << std::endl;
}

Form::~Form() {
    std::cout << "destractor is called" << std::endl;
}

Form::Form(const Form& copy) : _name(copy.getName()), index(copy.getIndex()), gradeIn(copy.getGradeIn()), gradeEx(copy.getGradeIn()) {
    std::cout << "copy constractor has been called" << std::endl;
}

Form::Form(std::string name, int in, int ex) : _name(name), gradeIn(in), gradeEx(ex) {
    std::cout << this->getName() << " Form constracted" << std::endl; 
}

Form& Form::operator=(const Form& form) {
    this->index = form.index;
    return *this;
}

int Form::getGradeEx() const {
    return gradeEx;
}

int Form::getGradeIn() const {
    return gradeIn;
}

bool Form::getIndex() const {
    return index;
}

const std::string Form::getName() const {
    return _name;
}

// bool Form::getIndex() {
//     return index;
// }

void Form::beSigned(Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() < this->getGradeIn()) {
        this->index = true;
    } else {
        throw GradeTooLowException();
    }
}

std::ostream& operator << (std::ostream& out, const Form& form) {
    out << form.getName() << " grade required to sign it " << form.getGradeIn() << " grade required to execute it " << form.getGradeEx() << " and it's signature status is ";
    if (!form.getIndex()) {
        out << "not signed";
    } else {
        out << "is signed";
    }
    return out;
}

const char *Form::GradeTooLowException::what() const throw() {
    return "grade is too low to signed the Form";
}