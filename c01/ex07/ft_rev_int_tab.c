/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtosun <rtosun@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:03:11 by rtosun            #+#    #+#             */
/*   Updated: 2021/12/01 23:05:56 by rtosun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	k;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		k = tab[i];
		tab[i] = tab[size -1 - i];
		tab[size - 1 - i] = k;
		i++;
	}
}

