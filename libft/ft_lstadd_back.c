/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:04:45 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/23 17:12:09 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*last_element;
	t_list	*ptr;

	ptr = *alst;
	if (ptr == NULL)
	{
		*alst = new;
		return ;
	}
	last_element = ft_lstlast(ptr);
	last_element->next = new;
}
