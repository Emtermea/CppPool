/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 14:51:19 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/12 14:51:21 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <cctype>
#include <cstdlib>
#include <climits>
#include <cstring>
#include <iostream>

void	toChar(float f)
{
	char c = static_cast<char>(f);
	std::cout << "char : ";
	if (isprint(c))
		std::cout << "'"<< c << "'" << std::endl;
	else
		std::cout << "Non Displayable" << std::endl;
}

void	toInt(float n)
{
	int i = static_cast<int>(n);
	std::cout << "int: ";
	if ((i > INT_MIN ) && (i < INT_MAX))
		std::cout << i << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

// void		toDouble(float f)
// {
// 	double d = static_cast<double>(f);
// 	std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
// }

void 	printChar(char *av)
{
	char c = av[0];
	int a = static_cast<char>(c);
	std::cout << "char : '"<< av[0] << "'"<< '\n';
	std::cout << "int : " << a - '0' << '\n';
	std::cout << "float : " << a - '0' << ".0f" << '\n';
	std::cout << "double : " << a - '0' << ".0" << '\n';
}

int 	checkChar(char *av)
{
	int len = strlen(av);
	char c = av[0];
	int a = static_cast<char>(c);
	int v = 0;

	if (len == 1 && !(isdigit(a)) && (isprint(a)))
		v = 1;
	if (strcmp(av, "nan") == 0)
		v = 2 ;
	if (strcmp(av, "-inf") == 0)
		v = 2;
	if (strcmp(av, "+inf") == 0)
		v = 2;
	if (strcmp(av, "-inff") == 0)
		v = 2;
	if (strcmp(av, "+inff") == 0)
		v = 2;
	if (strcmp(av, "nanf") == 0)
		v = 2;
	return v;
}

int		checkPrecision(char *av)
{
	char * found = strchr(av, '.');
	int lenFl = 0;
	if (found != NULL)
		lenFl = strlen(found);
	if (lenFl < 3)
		return 1;
	else
		return lenFl - 2;
}

int 	main( int ac, char **av )
{
	if (ac != 2)
	{
		std::cout << "ERROR" << std::endl;
		return 0;
	}
	float f = atof(av[1]);
	int v = checkChar(av[1]);
	if (v == 0)
	{
		toChar(f);
		toInt(f);

		float fl = static_cast<float>(f);
		std::cout << "float : " << std::fixed << std::setprecision(checkPrecision(av[1])) << fl << "f" << '\n';
		double d = static_cast<double>(f);
		std::cout << "double: " << std::fixed << std::setprecision(checkPrecision(av[1])) << d << std::endl;
		// toDouble(f);

	}
	else if (v == 1)
		printChar(av[1]);
	else
	{
		std::cout << "char : impossible" << '\n';
		toInt(f);
		// toDouble(f);
		float fl = static_cast<float>(f);
		std::cout << "float : " << std::fixed << std::setprecision(checkPrecision(av[1])) << fl << "f" << '\n';
		double d = static_cast<double>(f);
		std::cout << "double: " << std::fixed << std::setprecision(checkPrecision(av[1])) << d << std::endl;
	}
	return 0;
}
