/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 15:39:36 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/10 15:39:37 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {}

// Bureaucrat::Bureaucrat(Bureaucrat const & src) {
// 	*this = src;
// }

std::string const Bureaucrat::getName() const {
	return this->_name;
}

int Bureaucrat::getGrade () const {
	return this->_grade ;
}

void Bureaucrat::upGrade (){
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void Bureaucrat::downGrade() {
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}


Bureaucrat::GradeTooHighException::GradeTooHighException() {
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {
}

// Bureaucrat::GradeTooHighException::GradeTooHighException(COPIE) {
// }

const char * Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too high";
}


Bureaucrat::GradeTooLowException::GradeTooLowException() {
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {
}

// Bureaucrat::GradeTooLowException::GradeTooLowException(COPIE) {
// }

const char * Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i)
{
	o << "<" << i.getName() << ">, bureaucrat grade <" << i.getGrade() << ">";
	return o;
}