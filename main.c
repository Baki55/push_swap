/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 16:01:32 by hakermad          #+#    #+#             */
/*   Updated: 2022/06/28 15:15:40 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		*number;
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;

	stack_a = NULL;
	stack_b = NULL;
	i = 0;
	ft_check_args(argc, argv);
	number = ft_pars(argc, argv);
	while (i < argc - 1)
		ft_lstadd_back(&stack_a, ft_lstnew(&number[i++]));
	the_index(stack_a, number, argc);
	if (if_sort(stack_a))
	{
		free(number);
		ft_lstclear(&stack_a, NULL);
		exit(0);
	}
	ft_sort(argc, &stack_a, &stack_b);
	free(number);
	ft_lstclear(&stack_a, NULL);
	ft_lstclear(&stack_b, NULL);
	system("leaks push_swap");
}
