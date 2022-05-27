/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:01:27 by kmatos-s          #+#    #+#             */
/*   Updated: 2022/04/14 16:33:30 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a_value;
	int	b_value;

	a_value = *a;
	b_value = *b;
	*a = a_value / b_value;
	*b = a_value % b_value;
}
