/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 01:15:21 by kmatos-s          #+#    #+#             */
/*   Updated: 2022/04/22 23:50:21 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 1)
		return (nb);
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power > 1)
		result = ft_recursive_power(nb, power - 1);
	result = result * nb;
	return (result);
}
