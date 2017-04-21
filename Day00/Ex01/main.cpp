/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 22:23:23 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/03 22:23:34 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <string>
#include "contact.hpp"

void PrintSummary (int index, Contact *bookx);

int	main() {

	Contact bookx[8];
	int	i = 0;
	std::string action;

	std::cout << "Please, do your choice - ADD - SEARCH - EXIT : ";
	while (std::getline (std::cin, action)) {
		if (action == "ADD")
		{
			if (i < 8)
				bookx[i++].SetInfos();
			else
				std::cout << "The PhoneBook is full" << '\n';
		}
		else if (action == "SEARCH")
			PrintSummary(i, bookx);
		else if (action == "EXIT")
			return 0;
		else
			std::cout << "command doesn't exist" << '\n';
		std::cout << "Please, do your choice - ADD - SEARCH - EXIT : ";
	}
	return 0;
}

void PrintSummary (int index, Contact *bookx) {
	int i = 0;
	int	getline;

	std::string	buff;
	std::string firstName;
	std::string lastName;
	std::string nickName;

	while (i < index)
	{
		std::cout <<  std::to_string(i + 1) + "|";
		std::string firstName = bookx[i].getFirstName();
	    std::string lastName = bookx[i].getLastName();
	    std::string nickName = bookx[i].getNickName();
		if (firstName.size() > 10)
				firstName = firstName.substr(0, 9) + ".";
		firstName = std::string(firstName.rbegin(), firstName.rend());
		firstName.resize(10, ' ');
		firstName = std::string(firstName.rbegin(), firstName.rend());
		if (lastName.size() > 10)
	    	lastName = lastName.substr(0, 9) + ".";
	    lastName = std::string(lastName.rbegin(), lastName.rend());
	    lastName.resize(10, ' ');
	    lastName = std::string(lastName.rbegin(), lastName.rend());
	    if (nickName.size() > 10)
	        nickName = nickName.substr(0, 9) + ".";
	    nickName = std::string(nickName.rbegin(), nickName.rend());
	    nickName.resize(10, ' ');
	    nickName = std::string(nickName.rbegin(), nickName.rend());
	    std::cout << firstName + "|" + lastName + "|" + nickName + '\n';
		i++;
	}
	std::cout << "Enter index: " << std::endl;
	std::getline(std::cin, buff);
	getline = atoi(buff.c_str());
	if (getline >= 1 && getline <= 8)
    	std::cout << bookx[getline - 1].toString() << std::endl;
	else
		std::cout << "Invalid Index" << '\n';
}
