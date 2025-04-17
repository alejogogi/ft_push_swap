/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejagom <alejagom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:26:52 by alejagom          #+#    #+#             */
/*   Updated: 2025/04/17 20:25:55 by alejagom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_node **stack, char letter)
{
	t_node *primero;
	t_node *segundo;
	t_node *tercero;
	
	primero = stack;
	segundo = primero->next;
	tercero = segundo->next;

	segundo->next = primero;
	primero->next = tercero;
	stack = segundo;
	print_list(stack);//borrar
	ft_printf("s");
	ft_printf("%c\n", letter);
}

void	rotate(t_node **stack, char letter)
{
	t_node *first = *stack;
	t_node *finish = *stack;

	while(finish->next != NULL)
	{
		finish = finish->next;
	}
	*stack = first->next;
	finish->next = first;
	first->next = NULL;
	ft_printf("r");
		ft_printf("%c\n", letter);
}

void    reverse_rotate(t_node **stack, char letter)
{
	t_node *first = *stack;
	t_node *finish = *stack;
	t_node *before = NULL;

	while(finish->next != NULL)
	{
		before = finish;
		finish = finish->next;
	}
	before->next = NULL;
	finish->next = *stack;
	*stack = finish;

	ft_printf("r");
	ft_printf("%c\n", letter);
}  mera loca 
