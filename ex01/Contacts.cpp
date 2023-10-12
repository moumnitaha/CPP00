/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:21:59 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/12 12:18:06 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

Contacts::Contacts()
{

}

Contacts::~Contacts()
{
	
}

void Contacts::set_first_name(std::string f_n)
{
	this->first_name = f_n;
}

void Contacts::set_last_name(std::string l_n)
{
	this->last_name = l_n;
}

void Contacts::set_nick_name(std::string n_n)
{
	this->nick_name = n_n;
}

void Contacts::set_phone_nbr(std::string p_n)
{
	this->phone_nbr = p_n;
}

void Contacts::set_darkest_secret(std::string d_s)
{
	this->darkest_secret = d_s;
}

std::string Contacts::get_first_name(void) const
{
	return (this->first_name);
}

std::string Contacts::get_last_name(void) const
{
	return (this->last_name);
}

std::string Contacts::get_nick_name(void) const
{
	return (this->nick_name);
}

std::string Contacts::get_phone_nbr(void) const
{
	return (this->phone_nbr);
}

std::string Contacts::get_darkest_secret(void) const
{
	return (this->darkest_secret);
}

