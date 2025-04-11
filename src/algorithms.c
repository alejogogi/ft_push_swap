/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:18:13 by alejogogi         #+#    #+#             */
/*   Updated: 2025/04/11 20:23:38 by alejogogi        ###   ########.fr       */
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
