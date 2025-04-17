/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_algortihms.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:17:12 by alejogogi         #+#    #+#             */
/*   Updated: 2025/04/17 13:29:00 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	search_min(t_node *stack)
{
	t_node *temp;
	int	min;

	temp = stack;
	min = stack->index;
	while(temp)
	{
		if(temp->index < min)
			min = temp->index;
		temp = temp->next;		
	}
	return (min);
}

int	search_max(t_node *stack)
{
	t_node *temp;
	int	min;

	temp = stack;
	min = stack->index;
	while(temp)
	{
		if(temp->index > min)
			min = temp->index;
		temp = temp->next;		
	}
	return (min);
}
