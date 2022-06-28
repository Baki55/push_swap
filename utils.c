/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:58:29 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/28 15:25:20 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(char *str)
{
	while (*str)
	{
		write(2, str, 1);
		str++;
	}		
	exit (1);
}

int	*ft_pars(int argc, char **argv)
{
	int	i;
	int	*numbers;

	i = 1;
	if (argc < 2)
		exit(1);
	numbers = malloc(sizeof(int) * (argc - 1));
	if (!numbers)
	{
		free(numbers);
		return (NULL);
	}
	while (argc > i)
	{
		numbers[i - 1] = ft_atoi_push(argv[i], numbers);
		i++;
	}
	return (numbers);
}

int	if_sort(t_list *lst)
{
	int	i;

	i = 1;
	while (lst)
	{
		if (*(int *)lst->content != i)
			return (0);
		lst = lst->next;
		i++;
	}
	return (1);
}
