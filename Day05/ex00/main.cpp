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

int main(int argc, char const *argv[])
{

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

	try {
		Bureaucrat pipi("jean", 2);

		std::cout << pipi << std::endl;

		pipi.upGrade();
		pipi.upGrade();
	}
	catch (std::exception const & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat pipi("jean proout", 150);

		std::cout << pipi << std::endl;

		pipi.downGrade();
	}
	catch (std::exception const & e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
