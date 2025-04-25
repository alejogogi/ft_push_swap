/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parseo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejagom <alejagom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:55:20 by alejagom          #+#    #+#             */
/*   Updated: 2025/04/25 17:40:26 by alejagom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_same(int *array, int ln)
{
	int	i;
	int	j;

	i = 0;
	while (i < ln)
	{
		j = i + 1;
		while (j < ln)
		{
			if (array[i] == array[j])
			{
				ft_printf("Error\n");
				free(array);
				exit(EXIT_FAILURE);
			}
			j++;
		}
		i++;
	}
}

int	check_leng(int argc, char **argv)
{
	int	i;
	int	leng;

	i = 1;
	leng = 0;
	if (argc == 2)
	{
		if (first_arg(argv[1]) != 0)
			exit(EXIT_FAILURE);
	}
	while (i < argc)
	{
		if (check_empty(argv[i]) != 0 || ft_leng(argv[i]) == -1)
		{
			ft_printf("Error\n");
			exit(1);
		}
		leng += ft_leng(argv[i]);
		i++;
	}
	return (leng);
}
