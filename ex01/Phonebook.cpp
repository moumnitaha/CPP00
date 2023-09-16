/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:56:53 by tmoumni           #+#    #+#             */
/*   Updated: 2023/09/16 18:41:01 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"
#include "Contacts.hpp"

Phonebook::Phonebook()
{
	this->index = 0;
}

Phonebook::~Phonebook()
{

}

void Phonebook::get_contact_info(int index)
{
	std::cout << "First name: " << this->contacts[index].get_first_name() << std::endl;
	std::cout << "Last name: " << this->contacts[index].get_last_name() << std::endl;
	std::cout << "Nick name: " << this->contacts[index].get_nick_name() << std::endl;
	std::cout << "Phone number: " << this->contacts[index].get_phone_nbr() << std::endl;
	std::cout << "Darkest secret: " << this->contacts[index].get_darkest_secret() << std::endl;
}

void Phonebook::add_contact(void)
{
	std::string f_name;
	std::string l_name;
	std::string n_name;
	std::string ph_nbr;
	std::string dr_scr;

	std::cout << "Enter first name" << std::endl;
	std::getline(std::cin, f_name);
	this->contacts[this->index % 8].set_first_name(f_name);
	std::cout << "Enter last name" << std::endl;
	std::getline(std::cin, l_name);
	this->contacts[this->index % 8].set_last_name(l_name);
	std::cout << "Enter nick name" << std::endl;
	std::getline(std::cin, n_name);
	this->contacts[this->index % 8].set_nick_name(n_name);
	std::cout << "Enter phone number" << std::endl;
	std::getline(std::cin, ph_nbr);
	this->contacts[this->index % 8].set_phone_nbr(ph_nbr);
	std::cout << "Enter darkest secret" << std::endl;
	std::getline(std::cin, dr_scr);
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
	char index;

	i = 0;
	index = this->index + 1;
	std::cout << "| index   |first name| last name| nickname |" << std::endl;
	std::cout << "|---------|----------|----------|----------|" << std::endl;
	while (i < this->index && i < 8)
	{
		std::cout << "|     " << i + 1 << "   |";
		this->print_contact(this->contacts[i]);
		std::cout << std::endl;
		std::cout << "|---------|----------|----------|----------|" << std::endl;
		i++;
	}
	std::cout << "Enter index" << std::endl;
	std::cin >> index;
	if (std::isdigit(index) && index - 48 <= this->index && index > 48)
		this->get_contact_info(index - 48 - 1);
	else
		std::cout << "Invalid index" << std::endl;
	std::cin.clear();
	std::cin.ignore(256, '\n');
}