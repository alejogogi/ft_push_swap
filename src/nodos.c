/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodos.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejagom <alejagom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:37:12 by alejogogi         #+#    #+#             */
/*   Updated: 2025/04/24 20:55:05 by alejagom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stacks	*create_stack(void)
{
	t_stacks	*stacks;

	stacks = malloc(sizeof(t_stacks));
	if (!stacks)
	{
		ft_printf("error al crear stacks");
		exit(1);
	}
	stacks->stack_a = malloc(sizeof(t_stack));
	stacks->stack_b = malloc(sizeof(t_stack));
	if (!stacks->stack_a || !stacks->stack_b)
	{
		ft_printf("error al crear stack");
		free(stacks->stack_a);
		free(stacks->stack_b);
		free(stacks);
		exit(1);
	}
	stacks->stack_a->head = NULL;
	stacks->stack_a->size = 0;
	stacks->stack_b->head = NULL;
	stacks->stack_b->size = 0;
	return (stacks);
}

t_node	*create_node(int num, int index, t_stacks **stacks)
{
	t_node	*new_node;

	if (!stacks || !(*stacks)->stack_a)
		return (NULL);
	new_node = malloc(sizeof(t_node));
	if (!new_node)
		exit(1);
	new_node->num = num;
	new_node->index = index;
	new_node->next = (*stacks)->stack_a->head;
	(*stacks)->stack_a->head = new_node;
	(*stacks)->stack_a->size++;
	return (new_node);
}

void	data_stack_a(t_stacks **stacks, int *array, int *index, int ln)
{
	int	i;

	if (!stacks || !(*stacks)->stack_a)
	{
		ft_printf("error: estructura o parametros no iniciados");
		return ;
	}
	i = ln - 1;
	while (i >= 0)
	{
		create_node(array[i], index[i], &(*stacks));
		i--;
	}
}
