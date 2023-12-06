/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:27:52 by bsouhar           #+#    #+#             */
/*   Updated: 2023/12/06 15:43:47 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("", 145, 137) {
    
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", 145, 137) , _target(target) {
    
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm("Shrubbery", 145, 137), _target(copy._target) {
    std::cout << "copy constractor has been called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& shryberrycreationform) {
    std::cout << "copy assognment operator has been called" << std::endl;
    (void)shryberrycreationform;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) {
    if ((executor.getGrade() < this->getGradeEx()) && !this->getIndex() ) {
        std::ofstream file;
        file.open(_target + "_shrubbery");
        file << "binary tree\n";
        file.close();
    } else {
        throw GradeTooLowException();
    }
}