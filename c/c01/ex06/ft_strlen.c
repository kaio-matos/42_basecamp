/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 16:01:27 by kmatos-s          #+#    #+#             */
/*   Updated: 2022/04/14 17:00:42 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	total_length;

	total_length = 0;
	while (str[total_length] != '\0')
		total_length++;
	return (total_length);
}
