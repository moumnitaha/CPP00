/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:21:08 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/09 14:20:31 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	size_t i = 0;
	int j = 1;
	std::string str;
	
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while(j < ac)
	{
		str = av[j];
		i = 0;
		while(i < str.length())
		{
			std::cout << (char)std::toupper(str[i]);
			i++;
		}
		j++;
	}
	std::cout << std::endl;
}