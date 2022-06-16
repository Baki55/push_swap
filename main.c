/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 21:34:34 by bkhatib           #+#    #+#             */
/*   Updated: 2022/06/16 22:15:37 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc < 2)
		write(1, "Veuillez saisir au moins 1 entier", 33);
	else if (argc == 2)
		write(1, "1 entier", 8);
	else if (argc == 3)
		write(1, "2 entier", 8);
	else
		write(1, "Superieur à 2 entier", 21);
	return (0);
}
