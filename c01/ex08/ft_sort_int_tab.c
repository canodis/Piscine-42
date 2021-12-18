/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtosun <rtosun@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:34:43 by rtosun            #+#    #+#             */
/*   Updated: 2021/12/01 22:00:15 by rtosun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	k;
	int	bucket;

	i = 0;
	k = 0;
	while (i < size)
	{
		while (k < size)
		{
			if (tab[k] > tab[k + 1])
			{
				bucket = tab[k];
				tab[k] = tab[k + 1];
				tab[k + 1] = bucket;
			}
			k++;
		}
		i++;
		k = 0;
	}
}
