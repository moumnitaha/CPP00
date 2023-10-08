/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:33:44 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/08 11:47:05 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contacts.hpp"
#include <iomanip>
#include <string>

class Phonebook {
	private:
		Contacts	contacts[8];
		int			index;
	public :
		Phonebook();
		~Phonebook();
		void		add_contact(void);
		void		search_contact(void);
		void		print_contact(Contacts contact);
		void		get_contact_info(int index);
};

std::string trim(const std::string &str);

#endif