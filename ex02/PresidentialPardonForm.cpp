/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:27:38 by bsouhar           #+#    #+#             */
/*   Updated: 2023/12/04 15:31:08 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("", 25, 25) {
    
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("", 25, 25) , _target(target) {

}

PresidentialPardonForm::~PresidentialPardonForm() {
    
}