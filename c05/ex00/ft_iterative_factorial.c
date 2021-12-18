/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtosun <rtosun@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 23:18:50 by rtosun            #+#    #+#             */
/*   Updated: 2021/12/07 18:21:57 by rtosun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	toplam;

	i = 0;
	toplam = 1;
	if (nb < 0)
		return (0);
	while (++i <= nb)
	{
		toplam *= i;
	}
	return (toplam);
}
