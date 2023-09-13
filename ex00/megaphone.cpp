/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:21:08 by tmoumni           #+#    #+#             */
/*   Updated: 2023/09/13 13:17:03 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	size_t i = 0;
	int j = 1;
	
	while(j < ac)
	{
		i = 0;
		while(i < strlen(av[j]))
		{
			av[j][i] = std::toupper(av[j][i]);
			std::cout << av[j][i];
			i++;
		}
		if (av[j + 1])
			std::cout << " ";
		j++;
	}
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}