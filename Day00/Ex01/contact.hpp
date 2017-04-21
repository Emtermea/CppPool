/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 22:50:33 by emtermea          #+#    #+#             */
/*   Updated: 2017/04/03 22:50:38 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact {
private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _login;
	std::string _postal;
	std::string _email;
	std::string _phone_num;
	std::string _birthday;
	std::string _fav_meal;
	std::string _underwear_color;
	std::string _darkest_secret;

public:
	Contact ();
	~Contact ();

	void SetInfos();

	std::string toString() const;

	std::string getFirstName() const;
    void setFirstName(std::string firstName);
    std::string getLastName() const;
    void setLastName(std::string lastName);
    std::string getNickName() const;
    void setNickName(std::string nickName);
    std::string getLogin() const;
    void setLogin(std::string login);
    std::string getPostalAddress() const;
    void setPostalAddress(std::string postalAddress);
	std::string getEmailAddress() const;
    void setEmailAddress(std::string emailAddress);
    std::string getPhoneNumber() const;
    void setPhoneNumber(std::string phoneNumber);
    std::string getBirthdayDate() const;
    void setBirthdayDate(std::string birthdayDate);
    std::string getFavoriteMeal() const;
    void setFavoriteMeal(std::string favoriteMeal);
    std::string getUnderwearColor() const;
    void setUnderwearColor(std::string underwearColor);
    std::string getDarkestSecret() const;
    void setDarkestSecret(std::string darkestSecret);
};

#endif
