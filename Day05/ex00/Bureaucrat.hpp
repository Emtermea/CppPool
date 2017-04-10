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

class Bureaucrat
{
public:
	~Bureaucrat();
	Bureaucrat(std::string const name, int grade);
	// Bureaucrat(Bureaucrat const &);
	// Bureaucrat &operator=(Bureaucrat const & rhs);

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException();
		virtual ~GradeTooHighException() throw();
		// GradeTooHighException(COPIE);
		// GradeTooHighException &operator=();
	
		virtual const char * what() const throw();
// Bureaucrat::GradeTooLowException
	};

	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException();
		virtual ~GradeTooLowException() throw();
		// GradeTooLowException(COPIE);
		// GradeTooLowException &operator=();
	
		virtual const char * what() const throw();
// Bureaucrat::GradeTooLowException
	};	

	void upGrade();
	void downGrade();
	std::string const getName() const;
	int getGrade() const;

private:
	Bureaucrat();

	std::string const _name;
	int _grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i);

#endif