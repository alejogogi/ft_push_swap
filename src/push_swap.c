/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:23:47 by alejagom          #+#    #+#             */
/*   Updated: 2025/04/03 16:58:26 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	i = 0;
	int	*result;
	//t_stacks	*stacks;

	int o = 1;
	while(argv[o])
	{
		ft_printf("LOS ARGUMENRTOS TIENEN ESTO %s\n", argv[o]);
		o++;
	}

	if (argc <= 2)
	{
		ft_printf("numero de argumentos invalido\n");
		return (1);
	}
	result = parseo(argc, argv);
	while(result[i])
	{
		ft_printf("tiene esto %i\n", result[i]);
		i++;
	}
	return (0);
}
