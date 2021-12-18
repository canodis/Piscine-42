/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtosun <rtosun@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 22:34:31 by rtosun            #+#    #+#             */
/*   Updated: 2021/12/15 10:45:30 by rtosun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int alfa;
	int delta;

	if (x < 1 || y < 1)
		return ;
	delta = 1;
	while (delta <= y)
	{
		alfa = 1;
		while (alfa <= x)
		{
			if ((alfa > 1 && alfa < x) && (delta > 1 && delta < y))
				ft_putchar(' ');
			else if ((alfa > 1 && alfa < x) && (delta == 1 || delta == y))
				ft_putchar('-');
			else if ((delta > 1 && delta < y) && (alfa == 1 || alfa == x))
				ft_putchar('|');
			else
				ft_putchar('o');
			alfa++;
		}
		ft_putchar('\n');
		delta++;
	}
}