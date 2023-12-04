/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:16:24 by bsouhar           #+#    #+#             */
/*   Updated: 2023/12/04 08:02:28 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name(""), gradeIn(0) , gradeEx(0){
    this->index = false;
    std::cout << "AForm default constracror"  << std::endl;
}

AForm::~AForm() {
    std::cout << "destractor is called" << std::endl;
}

AForm::AForm(const AForm& copy) : _name(copy.getName()) , gradeIn(copy.getGradeIn()), gradeEx(copy.getGradeIn()) {
    // this->

}

AForm::AForm(std::string name, int in, int ex) : _name(name) , gradeIn(in), gradeEx(ex) {
    std::cout << this->getName() << " AForm constracted" << std::endl; 
}

AForm& AForm::operator=(const AForm& form) {
    this->index = form.index;
    return *this;
}

int AForm::getGradeEx() const {
    return gradeEx;
}

int AForm::getGradeIn() const {
    return gradeIn;
}

bool AForm::getIndex() const {
    return index;
}

const std::string AForm::getName() const {
    return _name;
}

void AForm::beSigned(Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() < this->getGradeIn()) {
        this->index = true;
    } else {
        throw GradeTooLowException();
    }
}

void AForm::execute(Bureaucrat const & executor) {
    
}

std::ostream& operator << (std::ostream& out, const AForm& form) {
    out << form.getName() << " grade required to sign it " << form.getGradeIn() << " grade required to execute it " << form.getGradeEx() << " and it's signature status is ";
    if (!form.getIndex()) {
        out << "not signed";
    } else {
        out << "is signed";
    }
    return out;
}

const char *AForm::GradeTooLowException::what() const throw() {
    return "grade is too low to signed the AForm";
}