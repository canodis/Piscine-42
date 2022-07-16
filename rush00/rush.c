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

void	rush(int last_x, int last_y)
{
	int	x;
	int	y;

	y = -1;
	while (++y < last_y)
	{
		x = -1;
		while (++x < last_x)
		{
			if ((y == 0 || y == last_y - 1) && (x == 0 || x == last_x - 1))
				write(1, "o", 1);
			else if (x == 0 || x == last_x - 1)
				write(1, "|", 1);
			else if ((y == 0 || y == last_y - 1))
				write(1, "-", 1);
			else
				write (1, " ", 1);
		}
		write (1, "\n", 1);
	}
}
