/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodos.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:37:12 by alejogogi         #+#    #+#             */
/*   Updated: 2025/04/13 23:12:25 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*create_node(int num, int index, t_stacks *stacks)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
	{
		free_nodes(stacks);
		exit(1);
	}
	new_node -> num = num;
	new_node -> index = index;
	new_node -> next = stacks->stack_a;
	stacks->stack_a = new_node;
	return (new_node);
}

void	data_stack_a(t_stacks *stakcs, int *array, int *index, int ln)
{
	int	i;

	i = 0;
	while (i < ln)
	{
		create_node(array[i], index[i], stakcs);
		i++;
	}
}

t_stacks	*create_stack(void)
{
	t_stacks	*stacks;

	stacks = malloc(sizeof(t_stacks));
	if (!stacks)
	{
		exit(1);
	}
	stacks->stack_a = NULL;
	stacks->stack_b = NULL;
	return (stacks);
}
