/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:52:23 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/28 15:35:17 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	the_index(t_list *stack_a, int *number, int argc)
{
	int		i;
	int		j;
	int		*data;
	int		count;
	t_list	*copy_stack_a;

	copy_stack_a = stack_a;
	i = 0;
	data = malloc(sizeof(int) * argc);
	if (!data)
		ft_error("Error\n");
	while (stack_a)
	{
		j = 0;
		count = 1;
		while (j < argc - 1)
		{
			if (j != i && number[j] < number[i])
				count++;
			j++;
		}
		data[i++] = count;
		stack_a = stack_a->next;
	}
	ft_copy_stack(copy_stack_a, data);
}

void	ft_copy_stack(t_list *stack_a,	int	*data)
{
	t_list	*copy_stack_a;
	int		i;

	copy_stack_a = stack_a;
	i = 0;
	while (copy_stack_a)
	{
		(*(int *) copy_stack_a->content) = data[i];
		copy_stack_a = copy_stack_a->next;
		i++;
	}
	free(data);
}
