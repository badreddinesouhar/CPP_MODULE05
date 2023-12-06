/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:27:38 by bsouhar           #+#    #+#             */
/*   Updated: 2023/12/06 15:17:32 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("", 25, 25) {
    
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("", 25, 25) , _target(target) {

}

PresidentialPardonForm::~PresidentialPardonForm() {
    
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) {
    
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& presidebtialpardonform) {
    
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) {
    if ((executor.getGrade() < this->getGradeEx()) && !this->getIndex() ) {
        std::cout << _target << " has been pardoned by Zaphod Beeblebrox\n";
    } else {
        throw GradeTooLowException();
    }
}