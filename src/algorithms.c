/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejagom <alejagom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:18:13 by alejogogi         #+#    #+#             */
/*   Updated: 2025/04/17 20:14:59 by alejagom         ###   ########.fr       */
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

int	ordered_list(t_stacks *stakcs)
{
	t_node	*temp;

	temp = stakcs->stack_a;
	if (!stakcs || !stakcs->stack_a || stakcs->stack_a->next)
		return(1);
	while(temp->next)
	{
		if (temp->index > temp->next->index)
			return (0);
		temp = temp->next;
	}
	return (1);
}


void	algorithms(t_stacks *t_stacks, int ln)
{
	if(!ordered_list(t_stacks))
	{
		free_nodes(t_stacks);
		exit(0);
	}
	if (ln == 2)
		swap(t_stacks->stack_a, 'a');
	if (ln == 3)
		case_three(t_stacks->stack_a, ln);
}
