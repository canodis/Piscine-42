/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtosun <rtosun@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 01:33:36 by rtosun            #+#    #+#             */
/*   Updated: 2021/12/09 13:54:18 by rtosun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argv, char **argc)
{
	int	a;

	a = 1;
	if (argv > 1)
	{
		while (a < argv)
		{
			ft_putstr(argc[a]);
			write(1, "\n", 1);
			a++;
		}	
	}
}
