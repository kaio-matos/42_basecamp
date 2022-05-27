/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:20:05 by kmatos-s          #+#    #+#             */
/*   Updated: 2022/04/13 02:53:06 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_two_length_number(int number);

void	ft_print_comb2(void)
{
	int	compare_number;
	int	number;

	compare_number = 0;
	number = 0;
	while (number <= 99)
	{
		if (number > compare_number)
		{
			print_two_length_number(compare_number);
			write(1, " ", 1);
			print_two_length_number(number);
			if (compare_number == 99 - 1 && number == 99)
				write(1, "", 0);
			else
				write(1, ", ", 2);
		}
		if (number == 99 && compare_number < 99)
		{
			compare_number++;
			number = 0;
		}
		else
			number++;
	}
}

void	print_two_length_number(int number)
{
	char	first;
	char	second;

	first = (number / 10) + '0';
	second = (number % 10) + '0';
	write(1, &first, 1);
	write(1, &second, 1);
}
