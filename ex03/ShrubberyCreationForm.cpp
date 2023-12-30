/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:27:52 by bsouhar           #+#    #+#             */
/*   Updated: 2023/12/16 12:54:29 by bsouhar          ###   ########.fr       */
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

// <<<<<<< HEAD
// ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& shryberrycreationform) {
//     std::cout << "copy assognment operator has been called" << std::endl;
//     (void)shryberrycreationform;
//     return *this;
// }

// void ShrubberyCreationForm::executed(Bureaucrat const & executor) const {
//     (void)executor;
//     std::ofstream file;
//     file.open(_target + "_shrubbery");
//     file << "binary tree\n";
//     file.close();
// =======
// // void ShrubberyCreationForm::execute(Bureaucrat const & executor) {
// //     if ((executor.getGrade() < this->getGradeEx()) && !this->getIndex() ) {
// //         std::ofstream file;
// //         file.open(_target + "_shrubbery");
// //         file << "binary tree\n";
// //         file.close();
// //     } else {
// //         throw GradeTooLowException();
// //     }
// // }

// void ShrubberyCreationForm::execute(const Bureaucrat& executor) {
//     if ((executor.getGrade() < this->getGradeEx()) && !this->getIndex()) {
//         std::ofstream file;
//         file.open((_target + "_shrubbery").c_str());  // Convert to const char*
//         // if (!file.is_open()) {
//         //     // Handle the case where the file couldn't be opened
//         //     throw FileOpenException();
//         // }
//         file << "binary tree\n";
//         file.close();
//     } else {
//         throw GradeTooLowException();
//     }
// >>>>>>> cd72d7b0ad2f95bc0248f9ec0ceb6651de6521f9
// }

void ShrubberyCreationForm::executed(const Bureaucrat& executor) const {
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