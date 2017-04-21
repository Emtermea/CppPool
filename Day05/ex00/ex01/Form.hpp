/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 12:02:31 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/11 12:02:32 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form {
private:
	std::string const _name ;
	bool _status ;
	int const _grade ;

public:
	Form ();
	~Form ();
	Form(Form const & src);
	Form(std::string const name, int const grade);
	Form & operator=(Form const & rhs);

	std::string const getName () const;
	bool getStatus() const ;
	int getGrade() const ;

	void beSigned(Bureaucrat crat);

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException();
		virtual ~GradeTooHighException() throw();
		GradeTooHighException(Form::GradeTooHighException const & src);
		GradeTooHighException &operator=(Form::GradeTooHighException const &);

		virtual const char * what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException();
		virtual ~GradeTooLowException() throw();
		GradeTooLowException(Form::GradeTooLowException const & src);
		GradeTooLowException &operator=(Form::GradeTooLowException const &);

		virtual const char * what() const throw();
	};
};

std::ostream & operator<<(std::ostream & o, Form const i);

#endif
