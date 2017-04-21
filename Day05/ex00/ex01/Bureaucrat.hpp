/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 15:39:29 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/10 15:39:31 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Form;

class Bureaucrat
{
public:
	~Bureaucrat();
	Bureaucrat(std::string const name, int grade);
	Bureaucrat(Bureaucrat const & src);
	Bureaucrat & operator=(Bureaucrat const & rhs);

	void upGrade();
	void downGrade();
	std::string const getName() const;
	int getGrade() const;

	void  signForm(Form & f);

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException();
		virtual ~GradeTooHighException() throw();
		GradeTooHighException(Bureaucrat::GradeTooHighException const & src);
		GradeTooHighException &operator=(Bureaucrat::GradeTooHighException const &);

		virtual const char * what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException();
		virtual ~GradeTooLowException() throw();
		GradeTooLowException(Bureaucrat::GradeTooLowException const & src);
		GradeTooLowException &operator=(Bureaucrat::GradeTooLowException const &);

		virtual const char * what() const throw();
	};

private:
	Bureaucrat();

	std::string const _name;
	int _grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i);

#endif
