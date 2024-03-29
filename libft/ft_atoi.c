/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 09:05:34 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/28 15:23:50 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	overflow(long nb)
{
	if (nb == -1)
		return (0);
	return (-1);
}

int	ft_atoi(const char *str)
{
	long long	result;
	int			sign;

	result = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
		{
			sign *= -1;
		}
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str++ - '0';
		if (result < 0)
			return (overflow(sign));
	}
	return (sign * result);
}
