/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:41:58 by tmoumni           #+#    #+#             */
/*   Updated: 2023/09/16 18:19:04 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contacts.hpp"
#include "Phonebook.hpp"

int main()
{
	Phonebook phonebook;
	std::string command;

	while (1)
	{
		std::cout << "Enter a command" << std::endl;
		std::getline(std::cin, command, '\n');
		if (command == "EXIT" || std::cin.eof())
			exit(0);
		else if (command == "ADD")
			phonebook.add_contact();
		else if (command == "SEARCH")
			phonebook.search_contact();
		else if (!std::cin.eof())
			std::cout << "Invalid command" << std::endl;
		std::cin.clear();
	}
	return (0);
}
