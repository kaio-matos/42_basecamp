/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:24:50 by kmatos-s          #+#    #+#             */
/*   Updated: 2022/04/20 04:21:29 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int		difference;
	int		i;
	char	ch1;
	char	ch2;

	i = 0;
	difference = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		ch1 = s1[i];
		ch2 = s2[i];
		if (ch1 != ch2)
		{
			difference = ch1 - ch2;
			return (difference);
		}
		i++;
	}
	return (difference);
}
