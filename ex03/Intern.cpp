/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:18:10 by bsouhar           #+#    #+#             */
/*   Updated: 2023/12/04 19:18:19 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {

}

Intern::~Intern() {

}

// Intern& Intern::operator=(const Intern& intern) {

// }

// Intern::Intern(const Intern& copy) {

// }

// static AForm *makePresident(const std::string target) {
//     return (new PresidentialPardonForm(target));
// }

// static AForm *RobotoMyRequest(const std::string target) {
//     return (new RobotomyRequestForm(target));
// }

// static AForm *ShruberryCreation(const std::string target) {
//     return (new ShrubberyCreationForm(target));
// }

// AForm *Intern::makeForm(const std::string name, const std::string target) {
//     void (*ptr[3])(const std::string target) = {&makePresident, &RobotoMyRequest, &ShruberryCreation};
//     std::string forms[] = {"PresidentialPardonForm","RobotomyRequestForm", "ShrubberyCreationForm"};

//     for (int i = 0; i < 3; i++) {
//         if (forms[i] == name) {
//             return &ptr[i](target);
//         }
//     }
//     return NULL;
// }

Intern& Intern::operator=(const Intern& intern) {
    (void)intern;
    // Ensure you have a proper implementation of the assignment operator.
    // For example, you may need to copy member variables from 'intern'.
    // If your class does not have any dynamic memory allocation, you might not need to do anything.
    return *this;
}

Intern::Intern(const Intern& copy) {
    (void)copy;
    // Similar to the assignment operator, implement the copy constructor
    // based on the needs of your class.
}

static AForm *makePresident(const std::string target) {
    return (new PresidentialPardonForm(target));
}

static AForm *RobotoMyRequest(const std::string target) {
    return (new RobotomyRequestForm(target));
}

static AForm *ShruberryCreation(const std::string target) {
    return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeForm(const std::string name, const std::string target) {
    // Use the correct type for function pointers (AForm* (*)(const std::string))
    AForm* (*ptr[3])(const std::string) = {&makePresident, &RobotoMyRequest, &ShruberryCreation};
    std::string forms[] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};

    for (int i = 0; i < 3; i++) {
        if (forms[i] == name) {
            return ptr[i](target);  // No need for the address-of operator '&'
        }
    }
    return NULL;  // Use nullptr instead of NULL in modern C++
}
