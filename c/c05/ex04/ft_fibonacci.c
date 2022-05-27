/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 01:15:21 by kmatos-s          #+#    #+#             */
/*   Updated: 2022/04/22 22:58:46 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	f_1;
	int	f_2;
	int	result;

	f_1 = 0;
	f_2 = 0;
	result = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index == 2)
		return (1);
	f_1 = ft_fibonacci(index - 1);
	f_2 = ft_fibonacci(index - 2);
	result = f_1 + f_2;
	return (result);
}
