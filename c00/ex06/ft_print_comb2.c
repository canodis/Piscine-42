/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtosun <rtosun@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:54:47 by rtosun            #+#    #+#             */
/*   Updated: 2021/11/29 21:33:20 by rtosun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	sayi1;
	int	sayi2;

	sayi1 = 0;
	sayi2 = 0;
	while (sayi1 <= 99)
	{
		sayi2 = sayi1 + 1;
		while (sayi2 <= 99)
		{	
			ft_putchar(sayi1 / 10 + 48);
			ft_putchar(sayi1 % 10 + 48);
			ft_putchar(' ');
			ft_putchar(sayi2 / 10 + 48);
			ft_putchar(sayi2 % 10 + 48);
			sayi2++;
			if (sayi1 != 98)
			{
				write(1, ", ", 2);
			}
		}
	sayi1++;
	}
}

int main()
{
	ft_print_comb2();
}
