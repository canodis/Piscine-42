/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtosun <rtosun@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 22:34:31 by rtosun            #+#    #+#             */
/*   Updated: 2021/12/15 10:45:30 by rtosun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		bir;
	int		iki;
	int		c;

	s = (char *) malloc(sizeof(strs));
	bir = 0;
	c = 0;
	while (bir < size)
	{
		iki = 0;
		while (strs[bir][iki] != '\0')
		{
			s[c++] = strs[bir][iki++];
		}
		iki = 0;
		while (sep[iki] != '\0' && bir != size - 1)
		{
			s[c++] = sep[iki++];
		}
		bir++;
	}
	s[c] = '\0';
	return (s);
}
