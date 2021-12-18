/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtosun <rtosun@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 16:57:13 by rtosun            #+#    #+#             */
/*   Updated: 2021/12/11 15:31:41 by rtosun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hata(char *base, int *hata)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		*hata = 1;
	while (base[i] && *hata == 0)
	{
		j = i;
		while (base[j] != '\0')
		{
			j++;
			if (base[i] == base[j])
				*hata = 1;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] == '%'
			|| base[i] == '/' || base[i] == '*' || base[i] == '='
			|| base[i] == ',' || base[i] == '.'
			|| base[i] < 33 || base[i] > 126)
			*hata = 1;
		else
			i++;
	}
}

void	ft_putnbr_base(int nbr, char *base)1
{
	int		basesayac;
	int		hata;
	long	nb;

	basesayac = 0;
	hata = 0;
	ft_hata(base, &hata);
	nb = nbr;
	if (hata == 0)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		while (base[basesayac] != '\0')
			basesayac++;
		if (nb < basesayac)
			ft_putchar(base[nb]);
		if (nb >= basesayac)
		{
			ft_putnbr_base(nb / basesayac, base);
			ft_putnbr_base(nb % basesayac, base);
		}
	}
}

