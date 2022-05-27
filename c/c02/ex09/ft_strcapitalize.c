/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 23:19:31 by kmatos-s          #+#    #+#             */
/*   Updated: 2022/04/18 15:53:25 by kmatos-s         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	last_char;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (i > 0)
			last_char = str[i - 1];
		else
			last_char = str[i];
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] = str[i] - 32;
			else
				if (last_char < 'A' || last_char > 'Z')
					if (last_char < 'a' || last_char > 'z')
						if (last_char < '0' || last_char > '9')
							str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
