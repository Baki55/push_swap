/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:10:49 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/28 15:25:20 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_one_before_last(t_list *stack_a)
{
	while (stack_a->next->next)
		stack_a = stack_a->next;
	return (stack_a);
}

void	ft_reverse_rotate_a(t_list **stack_a)
{
	t_list	*last;
	t_list	*second;
	t_list	*before_last;

	before_last = ft_one_before_last(*stack_a);
	last = ft_lstlast(*stack_a);
	second = (*stack_a)->next;
	last->next = *stack_a;
	before_last->next = NULL;
	*stack_a = last;
	write(1, "rra\n", 4);
}

void	ft_reverse_rotate_b(t_list **stack_b)
{
	t_list	*last;
	t_list	*second;
	t_list	*before_last;

	before_last = ft_one_before_last(*stack_b);
	last = ft_lstlast(*stack_b);
	second = (*stack_b)->next;
	last->next = *stack_b;
	before_last->next = NULL;
	*stack_b = last;
	write(1, "rrb\n", 4);
}

void	ft_reverse_rotate_r(t_list **stack_a, t_list **stack_b)
{
	ft_reverse_rotate_a(stack_a);
	ft_reverse_rotate_b(stack_b);
	write(1, "rrr\n", 4);
}
