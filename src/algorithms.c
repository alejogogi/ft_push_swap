/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejagom <alejagom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:18:13 by alejogogi         #+#    #+#             */
/*   Updated: 2025/05/05 20:18:40 by alejagom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bubble_sort(int ln, int *num)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < ln - 1)
	{
		j = 0;
		while (j < ln - i - 1)
		{
			if (num[j] > num[j + 1])
			{
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	ordered_list(t_stack *stack)
{
	t_node	*temp;

	if (!stack || !stack->head || !stack->head->next)
		return (1);
	temp = stack->head;
	while (temp->next)
	{
		if (temp->index > temp->next->index)
			return (1);
		temp = temp->next;
	}
	return (0);
}

void	algorithms(t_stacks *t_stacks, int ln, int *ar, int *in)
{
	if (!ordered_list(t_stacks->stack_a))
	{
		free(ar);
		free(in);
		free_nodes(t_stacks);
		exit(0);
	}
	else if (ln == 2)
		swap(&(t_stacks->stack_a), 'a');
	else if (ln == 3)
		case_three(&(t_stacks->stack_a), 'a');
	else if (ln <= 7)
		case_seven(&(t_stacks));
	else if (ln > 7)
	{
		k_sort1(&t_stacks, ln);
		k_sort2(&t_stacks, ln);
	}
}
