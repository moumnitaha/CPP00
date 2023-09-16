/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:21:59 by tmoumni           #+#    #+#             */
/*   Updated: 2023/09/16 14:47:39 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contacts.hpp"

Contacts::Contacts()
{

}

Contacts::~Contacts()
{
	
}

void Contacts::set_first_name(std::string first_name)
{
	this->first_name = first_name;
}

void Contacts::set_last_name(std::string last_name)
{
	this->last_name = last_name;
}

void Contacts::set_nick_name(std::string nick_name)
{
	this->nick_name = nick_name;
}

void Contacts::set_phone_nbr(std::string phone_nbr)
{
	this->phone_nbr = phone_nbr;
}

void Contacts::set_darkest_secret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
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

