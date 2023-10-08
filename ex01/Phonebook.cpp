/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:56:53 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/08 15:33:04 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"
#include "Contacts.hpp"

Phonebook::Phonebook() : index (0) {

}

Phonebook::~Phonebook() {

}

void Phonebook::get_contact_info(int index)
{
	std::cout << "First name: " << this->contacts[index].get_first_name() << std::endl;
	std::cout << "Last name: " << this->contacts[index].get_last_name() << std::endl;
	std::cout << "Nick name: " << this->contacts[index].get_nick_name() << std::endl;
	std::cout << "Phone number: " << this->contacts[index].get_phone_nbr() << std::endl;
	std::cout << "Darkest secret: " << this->contacts[index].get_darkest_secret() << std::endl;
}

std::string trim(const std::string &str) {
	size_t start = 0;
	while (start < str.length() && std::isspace(str[start]))
	{
		start++;
	}
	if (start == str.length())
		return "";
	size_t end = str.length() - 1;
	while (end > start && std::isspace(str[end]))
	{
		end--;
	}
	return str.substr(start, end - start + 1);
}

bool valid_phnbr(std::string &ph_nbr) {
	size_t i = 0;
	if (ph_nbr[i] == '+')
		i++;
	if (!ph_nbr[i]) return false;
	while (ph_nbr[i])
	{
		if(!std::isdigit(ph_nbr[i]))
			return false;
		i++;
	}
	return (true);
}

void Phonebook::add_contact(void)
{
	std::string f_name;
	std::string l_name;
	std::string n_name;
	std::string ph_nbr;
	std::string dr_scr;

	std::cout << "Enter first name" << std::endl;
	while (!f_name.length())
	{
		std::getline(std::cin, f_name);
		f_name = trim(f_name);
		if (!f_name.length())
			std::cout << "PLEASE ENTER A VALID F_NAME" << std::endl;
		if (std::cin.eof())
			exit (0);
	}
	this->contacts[this->index % 8].set_first_name(f_name);

	std::cout << "Enter last name" << std::endl;
	while (!l_name.length())
	{
		std::getline(std::cin, l_name);
		l_name = trim(l_name);
		if (!l_name.length())
			std::cout << "PLEASE ENTER A VALID L_NAME" << std::endl;
		if (std::cin.eof())
			exit (0);
	}
	this->contacts[this->index % 8].set_last_name(l_name);

	std::cout << "Enter nick name" << std::endl;
	while (!n_name.length())
	{
		std::getline(std::cin, n_name);
		n_name = trim(n_name);
		if (!n_name.length())
			std::cout << "PLEASE ENTER A VALID N_NAME" << std::endl;
		if (std::cin.eof())
			exit (0);
	}
	this->contacts[this->index % 8].set_nick_name(n_name);

	std::cout << "Enter phone number" << std::endl;
	while (!ph_nbr.length() || !valid_phnbr(ph_nbr))
	{
		std::getline(std::cin, ph_nbr);
		ph_nbr = trim(ph_nbr);
		if (!ph_nbr.length() || !valid_phnbr(ph_nbr))
			std::cout << "PLEASE ENTER A VALID PH_NBR" << std::endl;
		if (std::cin.eof())
			exit (0);
	}
	this->contacts[this->index % 8].set_phone_nbr(ph_nbr);

	std::cout << "Enter darkest secret" << std::endl;
	while (!dr_scr.length())
	{
		std::getline(std::cin, dr_scr);
		dr_scr = trim(dr_scr);
		if (!dr_scr.length())
			std::cout << "PLEASE ENTER A VALID DR_SCR" << std::endl;
		if (std::cin.eof())
			exit (0);
	}
	this->contacts[this->index % 8].set_darkest_secret(dr_scr);

	this->index++;
}

void	Phonebook::print_contact(Contacts contact)
{
	std::string f_name;
	std::string l_name;
	std::string n_name;

	f_name = contact.get_first_name();
	l_name = contact.get_last_name();
	n_name = contact.get_nick_name();
	
	if (f_name.length() > 10)
		std::cout << f_name.substr(0, 9) << ".|";
	else
	{
		std::cout << std::setw(10);
		std::cout << f_name << "|";
	}
	if (l_name.length() > 10)
		std::cout << l_name.substr(0, 9) << ".|";
	else
	{
		std::cout << std::setw(10);
		std::cout << l_name << "|";
	}
	if (n_name.length() > 10)
		std::cout << n_name.substr(0, 9) << ".|";
	else
	{
		std::cout << std::setw(10);
		std::cout << n_name << "|";
	}
}

void	Phonebook::search_contact(void)
{
	int i;
	int index = -1;

	i = 0;
	index = this->index + 1;
	std::cout << "|    index|first name| last name|  nickname|" << std::endl;
	std::cout << "|---------|----------|----------|----------|" << std::endl;
	while (i < this->index && i < 8)
	{
		std::cout << "|     " << i + 1 << "   |";
		this->print_contact(this->contacts[i]);
		std::cout << std::endl;
		std::cout << "|---------|----------|----------|----------|" << std::endl;
		i++;
	}
	while (index < 0 || index > this->index)
	{
		std::cout << "Enter index to show infos or 0 to return" << std::endl;
		std::cin >> index;
		if (std::cin.eof())
			exit (0);
		if (!index && !std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(256, '\n');
			break;
		}
		if (index > 0 && index <= this->index && index <= 8)
			this->get_contact_info(index - 1);
		else {
			std::cout << "Invalid index!" << std::endl;
			index = -1;
		}
		std::cin.clear();
		std::cin.ignore(256, '\n');
	}
}
