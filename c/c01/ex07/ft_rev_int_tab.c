/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:01:27 by kmatos-s          #+#    #+#             */
/*   Updated: 2022/04/15 15:54:59 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*get_element_pointer(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	first_element;
	int	last_position;
	int	*last_current_address;

	last_position = size - 1;
	last_current_address = get_element_pointer(tab, last_position);
	while (last_position >= (size / 2))
	{
		first_element = *tab;
		*tab = *last_current_address;
		*last_current_address = first_element;
		last_position--;
		last_current_address--;
		tab++;
	}
}

int	*get_element_pointer(int *tab, int last_position)
{
	return (tab + last_position);
}
