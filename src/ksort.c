/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ksort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:43:38 by alejogogi         #+#    #+#             */
/*   Updated: 2025/04/23 20:09:37 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sqrt(int num)
{
	int	i;

	if (num < 0)
		return (-1);
	if (num < 4)
		return (1);
	i = 2;
	while (i * i < num)
		i++;
	if (i * i - num < num - (i - 1) * (i - 1))
		return (i);
	return (i - 1);
}

void	k_sort1(t_stacks **stacks, int ln)
{
	int	i;
	int	range;

	i = 0;
	range = ft_sqrt(ln) * 14 / 10;
	while ((*stacks)->stack_a->head)
	{
		if ((*stacks)->stack_a->head->index <= i)
		{
			push(&(*stacks)->stack_a, &(*stacks)->stack_b, 'b');
			i++;
		}
		if ((*stacks)->stack_a->head->index <= i + range)
		{
			push(&(*stacks)->stack_a, &(*stacks)->stack_b, 'b');
			rotate(&(*stacks)->stack_b, 'b');
			i++;
		}
		else
			rotate(&(*stacks)->stack_a, 'a');
	}
}

void	k_sort2(t_stacks **s, int ln)
{
	while (ln--)
	{
		if (count_index((*s)->stack_b->head, ln) <= (*s)->stack_b->size / 2)
		{
			while ((*s)->stack_b->head->index != ln)
				rotate(&(*s)->stack_b, 'b');
		}
		else
		{
			while ((*s)->stack_b->head->index != ln)
				reverse_rotate(&(*s)->stack_b, 'b');
		}
	}
}