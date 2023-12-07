/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:27:52 by bsouhar           #+#    #+#             */
/*   Updated: 2023/12/07 13:17:11 by bsouhar          ###   ########.fr       */
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

void ShrubberyCreationForm::executed(Bureaucrat const & executor) const {
    (void)executor;
    // std::ofstream file;
    // file.open(_target + "_shrubbery");
    // file << TREE << std::endl;
    // file.close();
    std::ofstream file;
    file.open(_target + "_shrubbery");
    if (!file.is_open()) {
        std::cerr << "Error opening file for writing." << std::endl;
        return;
    }
    // Draw a simple binary tree structure
    file << "   *   " << std::endl;
    file << "  / \\  " << std::endl;
    file << " *   * " << std::endl;
    file << "/ \\ / \\" << std::endl;
    file << "*  * *  " << std::endl;
    file.close();
    std::cout << "Binary tree has been drawn and saved to " << _target + "_shrubbery.txt" << std::endl;
}

