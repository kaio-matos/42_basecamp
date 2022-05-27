/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:01:27 by kmatos-s          #+#    #+#             */
/*   Updated: 2022/04/15 16:07:12 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	is_finished;

	is_finished = 1;
	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1] && (i + 1) < size)
		{
			swap(&tab[i], &tab[i + 1]);
			is_finished = 0;
		}
		i++;
	}
	if (!is_finished)
		ft_sort_int_tab(tab, size);
}

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
