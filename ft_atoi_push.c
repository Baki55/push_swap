/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:33:38 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/28 15:25:20 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi_push(const char *str, int *numbers)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			sign *= -1;
		if (*str == '\0')
			ft_free_exit(numbers);
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str++ - '0';
		if (result < 0)
		{
			if (result == -2147483648 && *str == '\0' && sign == -1)
				return (-2147483648);
			ft_free_exit(numbers);
		}
	}
	if (*str && !(*str >= '0' && *str <= '9'))
		ft_free_exit(numbers);
	return (sign * result);
}

void	ft_free_exit(int *numbers)
{
	free(numbers);
	ft_error("Error\n");
}
