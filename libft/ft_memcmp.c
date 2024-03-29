/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:58:48 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/28 15:25:20 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				count;
	const unsigned char	*first;
	const unsigned char	*second;

	first = (unsigned char *)s1;
	second = (unsigned char *)s2;
	count = 0;
	while (count < n)
	{
		if (first[count] != second[count])
		{
			return (first[count] - second[count]);
		}
		count++;
	}
	return (0);
}
