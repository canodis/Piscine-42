/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtosun <rtosun@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:54:09 by rtosun            #+#    #+#             */
/*   Updated: 2021/11/28 01:21:01 by rtosun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_multiple(char c1, char c2, char c3)
{
	ft_putchar(c1 + 48);
	ft_putchar(c2 + 48);
	ft_putchar(c3 + 48);
	if (c1 != 7 || c2 != 8 || c3 != 9)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	sayi1;
	int	sayi2;
	int	sayi3;

	sayi1 = 0;
	while (sayi1 <= 7)
	{
		sayi2 = sayi1 + 1;
		while (sayi2 <= 8)
		{
			sayi3 = sayi2 + 1;
			while (sayi3 <= 9)
			{
				ft_putchar_multiple(sayi1, sayi2, sayi3);
				sayi3++;
			}
			sayi2++;
		}
		sayi1++;
	}
}
