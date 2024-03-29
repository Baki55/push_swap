/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:15:44 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/28 15:25:20 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	int			i;

	d = dst;
	s = src;
	i = len - 1;
	if (!dst && !src)
	{
		return (NULL);
	}
	if (d > s)
	{
		while (i >= 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	else
		ft_memcpy (dst, src, len);
	return (dst);
}
