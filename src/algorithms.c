/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:18:13 by alejogogi         #+#    #+#             */
/*   Updated: 2025/04/14 22:54:13 by alejogogi        ###   ########.fr       */
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

void	swap(t_stacks *t_stacks)
{
	t_node *primero;
	t_node *segundo;
	t_node *tercero;
	
	if (t_stacks->stack_a == NULL || t_stacks->stack_a->next == NULL) // Validación de al menos dos nodos
        	return;
	primero = t_stacks->stack_a;
	segundo = t_stacks->stack_a->next;
	tercero = segundo->next;

	segundo->next = primero;
	primero->next = tercero;
	t_stacks->stack_a = segundo;
}

void	algorithms(t_stacks *t_stacks, int ln)
{
	if (ln == 2)
	{
		swap(t_stacks);
		print_list(t_stacks->stack_a);	
	}
}
