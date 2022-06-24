/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:15:31 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/24 18:10:17 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap_a(t_list **stack_a)
{
	int	*tmp;

	tmp = (*stack_a)->content;
	(*stack_a)->content = (*stack_a)->next->content;
	(*stack_a)->next->content = tmp;
	write(1, "sa\n", 3);
}

void	ft_swap_b(t_list **stack_b)
{
	t_list	*first;
	t_list	*second;

	first = *stack_b;
	second = (*stack_b)->next;
	(*stack_b)->next = second->next;
	second->next = first;
	*stack_b = second;
	write(1, "sb\n", 3);
}

void	ft_swap_ss(t_list **stack_a, t_list **stack_b)
{
	ft_swap_a(stack_a);
	ft_swap_b(stack_b);
	write(1, "ss\n", 3);
}
