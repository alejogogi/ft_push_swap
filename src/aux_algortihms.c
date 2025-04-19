/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_algortihms.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:17:12 by alejogogi         #+#    #+#             */
/*   Updated: 2025/04/19 13:59:54 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*search_min(t_stack *stack)
{
	t_node	*temp;
	t_node	*min_node;

	temp = stack->head;
	min_node = temp;
	while (temp)
	{
		if (temp->index < min_node->index)
			min_node = temp;
		temp = temp->next;
	}
	return (min_node);
}

t_node	*search_max(t_stack *stack)
{
	t_node	*temp;
	t_node	*max_node;

	temp = stack->head;
	max_node = temp;
	while (temp)
	{
		if (temp->index > max_node->index)
			max_node = temp;
		temp = temp->next;
	}
	return (max_node);
}

void	push_specific_node(t_stack **a, t_stack **b, t_node *nodo, char l)
{
	t_node	*head;
	t_node	*prev;

	head = (*a)->head;
	prev = NULL;
	while (head && head != nodo)
	{
		prev = head;
		head = head->next;
	}
	if (!head)
		return ;
	if (prev)
		prev->next = head->next;
	else
		(*a)->head = head->next;
	(*a)->size--;
	head->next = (*b)->head;
	(*b)->head = head;
	(*b)->size++;
	ft_printf("p");
	ft_printf("%c\n", l);
}
