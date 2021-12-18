/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtosun <rtosun@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 03:30:44 by rtosun            #+#    #+#             */
/*   Updated: 2021/12/08 02:10:57 by rtosun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_low(char str)
{
	return (str >= 'a' && str <= 'z');
}

int	is_up(char str)
{
	return (str >= 'A' && str <= 'Z');
}

int	is_num(char str)
{
	return (str >= '0' && str <= '9');
}

int	is_alphanum(char str)
{
	return (is_low(str) || is_up(str) || is_num(str));
}

char	*ft_strcapitalize(char *str)
{
	int i;

	if (is_low(str[i]))
		str[i] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (is_alphanum(str[i]))
		{
			if (!is_alphanum(str[i - 1]))
			{
				if (is_low(str[i]))
					str[i] -= 32;
			}
			else
			{
				if (is_up(str[i]))
					str[i] += 32;
			}
		}
		i++;
	}
	return (str);
}
