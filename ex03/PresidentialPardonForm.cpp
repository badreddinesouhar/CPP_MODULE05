/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:27:38 by bsouhar           #+#    #+#             */
/*   Updated: 2023/12/06 17:32:07 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("", 25, 25) {
    
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("", 25, 25) , _target(target) {

}

PresidentialPardonForm::~PresidentialPardonForm() {
    
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm("presidentialpardon", 25, 25), _target(copy._target) {
    std::cout << "copy constractor has been called" << std::endl;    
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& presidentialpardonform) {
    (void)presidentialpardonform;
    return *this;
}

void PresidentialPardonForm::executed(Bureaucrat const & executor) const {
    (void)executor;
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox\n";
}