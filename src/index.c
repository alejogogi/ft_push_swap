/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 21:39:07 by alejogogi         #+#    #+#             */
/*   Updated: 2025/04/23 19:46:47 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assing_index(int *array, int *num, int *indexes, int ln)
{
	int	i;
	int	j;
	int	next;

	i = 0;
	while (i < ln)
	{
		j = 0;
		next = 1;
		while (j < ln && next == 1)
		{
			if (array[i] == num[j])
			{
				indexes[i] = j;
				next = 0;
			}
			j++;
		}
		i++;
	}
}

int	count_index(t_node *node, int index)
{
	int	counter;

	if (!node)
		return (-1);
	counter = 0;
	while (node)
	{
		if (node->index == index)
			return (counter);
		node = node->next;
		counter++;
	}
	return (0);
}

void	cpy_nums(int ln, int *array, int *num)
{
	int	i;

	i = 0;
	while (i < ln)
	{
		num[i] = array[i];
		i++;
	}
}

int	*ft_index(int *array, int ln)
{
	int	*num;
	int	*indexes;

	indexes = save_mem(ln);
	num = save_mem(ln);
	if (!num || !indexes)
		return (NULL);
	cpy_nums(ln, array, num);
	bubble_sort(ln, num);
	assing_index(array, num, indexes, ln);
	free(num);
	return (indexes);
}
