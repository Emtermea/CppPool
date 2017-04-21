/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 12:02:21 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/11 12:02:23 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form () : _name("F2"), _grade(3) {
	this->_status = false;
}

Form::Form(std::string const name, int const grade) : _name(name), _grade(grade) {
	this->_status = false;
	if (grade < 1)
		throw Form::GradeTooHighException();
	if (grade > 150)
		throw Form::GradeTooLowException();

}

Form::~Form () {}

Form::Form (Form const & src) : _grade(3) {
	*this = src;
}

Form & Form::operator=(Form const & rhs) {
	this->_status = rhs.getStatus();
	return *this;
}
std::string const Form::getName() const {
	return this->_name;
}
int Form::getGrade () const {
	return this->_grade ;
}
bool Form::getStatus() const {
	return this->_status;
}

void Form::beSigned(Bureaucrat crat) {
	if (crat.getGrade() < this->_grade)
		this->_status = true;
	else
		throw Form::GradeTooLowException();
}

// GradeTooHighException
Form::GradeTooHighException::GradeTooHighException() {}
Form::GradeTooHighException::~GradeTooHighException() throw() {}
Form::GradeTooHighException::GradeTooHighException(Form::GradeTooHighException const & src) { *this = src; }
Form::GradeTooHighException & Form::GradeTooHighException::operator=(Form::GradeTooHighException const &) {	return *this; }
const char * Form::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

// GradeTooLowException
Form::GradeTooLowException::GradeTooLowException() {}
Form::GradeTooLowException::~GradeTooLowException() throw() {}
Form::GradeTooLowException::GradeTooLowException(Form::GradeTooLowException const & src) { *this = src; }
Form::GradeTooLowException & Form::GradeTooLowException::operator=(Form::GradeTooLowException const &) { return *this; }
const char * Form::GradeTooLowException::what() const throw() {
	return "Grade too low";
}
