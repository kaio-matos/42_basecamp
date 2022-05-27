/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 20:11:03 by kmatos-s          #+#    #+#             */
/*   Updated: 2022/04/21 18:49:58 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		length;

	i = 0;
	length = get_length(to_find);
	if (length == 0)
		return (&str[0]);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (j == length)
			return (&str[i]);
		i++;
	}
	return (0);
}
