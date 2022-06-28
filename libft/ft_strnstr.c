/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 14:24:24 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/28 15:25:20 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	count;
	size_t	sizeneedle;

	count = 0;
	sizeneedle = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[count] != '\0' && count + sizeneedle <= len)
	{
		if (ft_strncmp (&(haystack[count]), needle, sizeneedle) == 0)
		{
			return ((char *)haystack + count);
		}
		count++;
	}
	return (0);
}
