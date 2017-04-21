/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 15:39:43 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/10 15:39:44 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "Test with grade 160 :" << '\n';
	try
	{
		Bureaucrat papa("okkkkk", 160);
		std::cout << papa << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException const & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException const & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "Test with grade 2 :  [ upGrade ] " << '\n';
	try {
		Bureaucrat pipi("jean", 2);

		std::cout << pipi << std::endl;

		pipi.upGrade();
		pipi.upGrade();
	}
	catch (std::exception const & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "Test with grade 150 : [ downGrade ] " << '\n';
	try {
		Bureaucrat pipi("jean proout", 150);

		std::cout << pipi << std::endl;

		pipi.downGrade();
	}
	catch (std::exception const & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "Test with Form ok but bureaucrat's grade not enough high : test [ beSigned ]" << '\n';
	Form F1("F1", 2);
	Bureaucrat toto("Patate", 60);
	Bureaucrat titi("Carotte", 1);
	try
	{
			F1.beSigned(toto);
	}
	catch (std::exception const & e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << "Test with Form ok with bureaucrat's grade enough high : test [ beSigned ]" << '\n';
	try
	{
			F1.beSigned(titi);
			std::cout << "OK" << '\n';
	}
	catch (std::exception const & e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << "Test [ signForm ]" << '\n';
	try
	{
		toto.signForm(F1);
	}
	catch (std::exception const & e)
	{
		std::cout << e.what() << '\n';
	}
	try
	{
		titi.signForm(F1);
	}
	catch (std::exception const & e)
	{
		std::cout << e.what() << '\n';
	}
	return 0;
}
