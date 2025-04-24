/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 18:14:18 by alejogogi         #+#    #+#             */
/*   Updated: 2025/04/23 19:31:56 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	case_three(t_stack **stack, char letter)
{
	int	a;
	int	b;
	int	c;

	a = (*stack)->head->index;
	b = (*stack)->head->next->index;
	c = (*stack)->head->next->next->index;
	if (a < b && b > c && a < c)
	{
		swap(stack, letter);
		rotate(stack, letter);
	}
	if (a > b && b < c && a < c)
		swap(stack, letter);
	if (a < b && b > c && a > c)
		reverse_rotate(stack, letter);
	if (a > b && b < c && a > c)
		rotate(stack, letter);
	if (a > b && b > c)
	{
		swap(stack, letter);
		reverse_rotate(stack, letter);
	}
}

void	case_seven(t_stacks **stakcs)
{
	t_node	*min;

	while ((*stakcs)->stack_a->size > 3)
	{
		min = search_min((*stakcs)->stack_a);
		while ((*stakcs)->stack_a->head != min)
		{
			if ((*stakcs)->stack_a->head->index > min->index)
				rotate(&(*stakcs)->stack_a, 'a');
			else
				reverse_rotate(&(*stakcs)->stack_a, 'a');
		}
		push(&(*stakcs)->stack_a, &(*stakcs)->stack_b, 'b');
	}
	case_three(&(*stakcs)->stack_a, 'a');
	while ((*stakcs)->stack_b->size > 0)
	{
		push(&(*stakcs)->stack_b, &(*stakcs)->stack_a, 'a');
	}
	print_list((*stakcs)->stack_a);
}
