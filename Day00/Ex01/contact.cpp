/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 23:28:54 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/03 23:28:57 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "contact.hpp"

Contact::Contact () {
}

Contact::~Contact () {
}

void Contact::SetInfos() {

	std::cout << "Enter first name : " << '\n';
	std::getline (std::cin, this->_first_name);
	std::cout << "Enter last name : " << '\n';
	std::getline (std::cin, this->_last_name);
	std::cout << "Enter nickname : " << '\n';
	std::getline (std::cin, this->_nickname);
	std::cout << "Enter login : " << '\n';
	std::getline (std::cin, this->_login);
	std::cout << "Enter postale address : " << '\n';
	std::getline (std::cin, this->_postal);
	std::cout << "Enter email address : " << '\n';
	std::getline (std::cin, this->_email);
	std::cout << "Enter phone number : " << '\n';
	std::getline (std::cin, this->_phone_num);
	std::cout << "Enter birthday date : " << '\n';
	std::getline (std::cin, this->_birthday);
	std::cout << "Enter favorite meal : " << '\n';
	std::getline (std::cin, this->_fav_meal);
	std::cout << "Enter underwear color : " << '\n';
	std::getline (std::cin, this->_underwear_color);
	std::cout << "Enter darkest secret: " << '\n';
	std::getline (std::cin, this->_darkest_secret);
}

std::string Contact::getFirstName() const {
	return _first_name;
}
void Contact::setFirstName(std::string firstName) {
	Contact::_first_name = firstName;
}

std::string Contact::getLastName() const {
	return _last_name;
}
void Contact::setLastName(std::string lastName) {
	Contact::_last_name = lastName;
}

std::string Contact::getNickName() const {
	return _nickname;
}
void Contact::setNickName(std::string nickName) {
	Contact::_nickname = nickName;
}

std::string Contact::toString() const
{
	std::string	string;

    string += "firstName : " + this->_first_name + '\n';
    string += "lastName : " + this->_last_name + '\n';
    string += "nickName : " + this->_nickname + '\n';
    string += "login : " + this->_login + '\n';
    string += "postalAddress : " + this->_postal + '\n';
    string += "emailAddress : " + this->_email + '\n';
    string += "phoneNumber : " + this->_phone_num + '\n';
    string += "birthdayDate : " + this->_birthday + '\n';
    string += "favoriteMeal : " + this->_fav_meal + '\n';
    string += "underwearColor : " + this->_underwear_color + '\n';
    string += "darkestSecret : " + this->_darkest_secret + '\n';
        return string;
}
