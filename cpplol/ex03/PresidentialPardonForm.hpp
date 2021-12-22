/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esaci <esaci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 14:44:20 by elias             #+#    #+#             */
/*   Updated: 2021/12/22 16:41:41 by esaci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: virtual public Form
{
	private:
		std::string target;
		virtual void	executeform(Bureaucrat const &) const;
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( PresidentialPardonForm const &);
		PresidentialPardonForm(std::string const &Name);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &);
		virtual ~PresidentialPardonForm( void );
};

#endif