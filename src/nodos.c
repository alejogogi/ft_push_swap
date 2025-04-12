/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodos.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:37:12 by alejogogi         #+#    #+#             */
/*   Updated: 2025/04/12 17:45:23 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node *crate_node(int num, int index, t_stacks *stack_a)
{
	t_node *new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		free_nodes(new_node, stack_a);
	new_node -> num = num;
	new_node -> index = index;
	new_node -> next = NULL;
}