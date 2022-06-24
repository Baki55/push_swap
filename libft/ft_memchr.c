/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 09:44:00 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/23 17:13:40 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*word;
	size_t			count;

	word = (unsigned char *)s;
	count = 0;
	while (count < n)
	{
		if (word[count] == (unsigned char)c)
			return ((void *)&word[count]);
		count++;
	}
	return (0);
}
