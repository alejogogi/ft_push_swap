/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:23:47 by alejagom          #+#    #+#             */
/*   Updated: 2025/05/07 20:43:38 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int				ln;
	int				*array;
	int				*index;
	t_stacks		*stacks;

	ln = 0;
	if (argc < 2)
	{
		return (0);
	}
	ln = check_leng(argc, argv);
	array = ext_atoi(ln, argc, argv);
	check_same(array, ln);
	index = ft_index(array, ln);
	stacks = create_stack();
	data_stack_a(&(stacks), array, index, ln);
	algorithms(stacks, ln, array, index);
	free(array);
	free(index);
	free_nodes(stacks);
	return (0);
}
