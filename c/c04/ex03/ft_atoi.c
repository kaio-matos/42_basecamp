/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:41:33 by kmatos-s          #+#    #+#             */
/*   Updated: 2022/04/21 22:48:30 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	c_is_numeric(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

int	transform_char_int(char c)
{
	return (c - '0');
}

int	check_isspace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (check_isspace(str[i]))
		i++;
	while (!c_is_numeric(str[i]) && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (c_is_numeric(str[i]))
	{
		res = res * 10 + transform_char_int(str[i]);
		i++;
	}
	return (res * sign);
}
