/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:49:36 by hakermad          #+#    #+#             */
/*   Updated: 2022/04/04 15:08:51 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(int argc, t_list **stack_a, t_list **stack_b)
{
	if (argc - 1 == 2)
		case_two(stack_a);
	if (argc - 1 == 3)
		case_three(stack_a);
	if (argc - 1 == 4)
		case_four(stack_a, stack_b);
	if (argc - 1 == 5)
		case_five(stack_a, stack_b);
	if (argc - 1 > 5)
		radix_sort(stack_a, stack_b);
}
