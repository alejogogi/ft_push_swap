/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parseo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:55:20 by alejagom          #+#    #+#             */
/*   Updated: 2025/04/10 20:24:40 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    check_same(int *array, int ln)
{
    int i;
    int j;

    i = 0;
    while (i < ln)
    {
        j = i + 1;
        while (j < ln)
        {
            if (array[i] == array[j])
            {
                ft_printf("error\n");
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
		if (check_empty(argv[i]) != 0)
		{
			ft_printf("error\n");
			return (0);
		}
		leng += ft_leng(argv[i]);
		i++;
	}
	return (leng);
}
