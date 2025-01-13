/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadereve <yadereve@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 09:26:36 by yadereve          #+#    #+#             */
/*   Updated: 2025/01/13 09:36:26 by yadereve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& trget) 
	: AForm("PresidentialPardonForm", 25, 5), _target(target)
{ }

PresidentialPardonForm::~PresidentialPardonForm()
{ }

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	if (!getIsSigned())
		throw FormNotSignetExeption();
	if (executor.getGrade() > getExecuteGrade())
		throw GradeTooLowException();
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
