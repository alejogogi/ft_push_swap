/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:18:13 by alejogogi         #+#    #+#             */
/*   Updated: 2025/04/23 19:52:55 by alejogogi        ###   ########.fr       */
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

int	ordered_list(t_stacks *stacks)
{
	t_node	*temp;

	if (!stacks || !stacks->stack_a->head || stacks->stack_a->head->next)
		return (1);
	temp = stacks->stack_a->head;
	while (temp->next)
	{
		if (temp->index > temp->next->index)
			return (0);
		temp = temp->next;
	}
	return (1);
}

void	algorithms(t_stacks *t_stacks, int ln)
{
	if (!ordered_list(t_stacks))
	{
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
