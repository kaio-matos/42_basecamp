/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 23:19:31 by kmatos-s          #+#    #+#             */
/*   Updated: 2022/04/18 01:07:35 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;
	char	current_char;

	i = 0;
	while (str[i] != '\0')
	{
		current_char = str[i];
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = current_char + 32;
		i++;
	}
	return (str);
}
