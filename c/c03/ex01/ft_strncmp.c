/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:24:50 by kmatos-s          #+#    #+#             */
/*   Updated: 2022/04/21 15:39:20 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	char			ch1;
	char			ch2;
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		ch1 = s1[i];
		ch2 = s2[i];
		if (s1[i] != s2[i])
			return (ch1 - ch2);
		i++;
	}
	return (0);
}
