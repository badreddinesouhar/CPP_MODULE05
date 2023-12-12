/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:27:52 by bsouhar           #+#    #+#             */
/*   Updated: 2023/12/04 17:33:12 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("", 145, 137) {
    
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", 145, 137) , _target(target) {

}

// void ShrubberyCreationForm::execute(Bureaucrat const & executor) {
//     if ((executor.getGrade() < this->getGradeEx()) && !this->getIndex() ) {
//         std::ofstream file;
//         file.open(_target + "_shrubbery");
//         file << "binary tree\n";
//         file.close();
//     } else {
//         throw GradeTooLowException();
//     }
// }

void ShrubberyCreationForm::execute(const Bureaucrat& executor) {
    if ((executor.getGrade() < this->getGradeEx()) && !this->getIndex()) {
        std::ofstream file;
        file.open((_target + "_shrubbery").c_str());  // Convert to const char*
        // if (!file.is_open()) {
        //     // Handle the case where the file couldn't be opened
        //     throw FileOpenException();
        // }
        file << "binary tree\n";
        file.close();
    } else {
        throw GradeTooLowException();
    }
}
