/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:20:05 by kmatos-s          #+#    #+#             */
/*   Updated: 2022/04/13 02:51:53 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	check_number_and_print(int c, int d, int u);

void	ft_print_comb(void)
{
	int	c;
	int	d;
	int	u;

	c = '0';
	while (c <= '9')
	{
		d = '0';
		while (d <= '9')
		{
			u = '0';
			while (u <= '9')
			{
				check_number_and_print(c, d, u);
				u++;
			}
			d++;
		}
		c++;
	}
}

void	check_number_and_print(int c, int d, int u)
{
	char	number[3];

	if (d > c && u > d)
	{
		number[0] = c;
		number[1] = d;
		number[2] = u;
		if (c == '7' && d == '8' && u == '9')
		{
			write(1, &number, 3);
		}
		else
		{
			write(1, &number, 3);
			write(1, ", ", 2);
		}
	}
}
