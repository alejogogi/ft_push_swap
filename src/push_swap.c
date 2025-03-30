/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:23:47 by alejagom          #+#    #+#             */
/*   Updated: 2025/03/29 22:55:32 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	result;
	t_stacks	*stacks;

	if (argc < 2)
	{
		ft_printf("numero de argumentos invalido\n");
		return (1);
	}
	result = parseo(argc, argv);
	if (result == 0)
		printf("Error\n");
	else
		printf("resultado correcto\n");
	return (0);
}
