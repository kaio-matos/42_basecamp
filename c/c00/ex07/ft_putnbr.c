/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:20:05 by kmatos-s          #+#    #+#             */
/*   Updated: 2022/04/13 17:40:54 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	fill_with(char c, char str[10]);
void	put_number_into(int number, char str[10]);
int		get_number_length(char c, char str[10]);

void	ft_putnbr(int nb)
{
	char	str[10];
	int		k;
	int		number_size;

	fill_with('A', str);
	if (nb == 0)
		ft_putchar('0');
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	put_number_into(nb, str);
	number_size = get_number_length('A', str);
	k = number_size;
	while (k)
	{
		ft_putchar(str[10 - k]);
		k--;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	fill_with(char c, char str[10])
{
	int	j;

	j = 0;
	while (j < 10)
	{
		str[j] = c;
		j++;
	}
}

void	put_number_into(int number, char str[10])
{
	char	each_number;
	int		i;

	i = 9;
	while (number)
	{
		each_number = (number % 10) + '0';
		str[i] = each_number;
		number = number / 10;
		i--;
	}
}

int	get_number_length(char c, char str[10])
{
	int	j;
	int	number_size;

	j = 0;
	number_size = 0;
	while (j < 10)
	{
		if (str[j] != c)
			number_size++;
		j++;
	}
	return (number_size);
}
