/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:23:47 by alejagom          #+#    #+#             */
/*   Updated: 2025/04/10 21:38:27 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_array(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Elemento %d: %d\n", i, array[i]);
    }
}

int	main(int argc, char **argv)
{
	int	ln;
	int	*array;

	ln = 0;
	if (argc < 2)
	{
		ft_printf("numero de argumentos invalido\n");
		return (0);
	}
	ln = check_leng(argc, argv);
	array = ext_atoi(ln, argc, argv);
	check_same(array, ln);
	index(array, ln);
	print_array(array, ln);
	ft_printf("cantidad de argumentos a guardar %d\n", ln);
	free(array);
	return (0);
}
