/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:18:22 by bsouhar           #+#    #+#             */
/*   Updated: 2023/12/04 19:19:17 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Intern {
    private:

    public:
        Intern();
        ~Intern();
        Intern& operator = (const Intern& intern);
        Intern(const Intern& copy);
        AForm& makeForm(std::string name, std::string target);

};

#endif