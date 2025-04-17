/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:18:13 by alejogogi         #+#    #+#             */
/*   Updated: 2025/04/17 13:32:22 by alejogogi        ###   ########.fr       */
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

void	swap(t_node *stack, char letter)
{
	t_node *primero;
	t_node *segundo;
	t_node *tercero;
	
	primero = stack;
	segundo = stack->next;
	tercero = segundo->next;

	segundo->next = primero;
	primero->next = tercero;
	stack = segundo;
	print_list(stack);//borrar
	ft_printf("s");
	ft_printf("%c\n", letter);
}

void	case_three(t_node *stack, int ln)
{
	int	min;
	int	max;

	min = search_min(stack);
	max = search_max(stack);
	ft_printf("%d\n", min, ln, max);
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
