/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:07:32 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/12 12:16:49 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
# define CONTACTS_HPP

#include <string>
#include <iostream>

class	Contacts {
	private :
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	phone_nbr;
		std::string	darkest_secret;
	public :
		Contacts();
		~Contacts();
		//getres:
		std::string	get_first_name(void) const;
		std::string	get_last_name(void) const;
		std::string	get_nick_name(void) const;
		std::string	get_phone_nbr(void) const;
		std::string	get_darkest_secret(void) const;
		//setres:
		void		set_first_name(std::string f_n);
		void		set_last_name(std::string l_n);
		void		set_nick_name(std::string n_n);
		void		set_phone_nbr(std::string p_n);
		void		set_darkest_secret(std::string d_s);
};
#endif