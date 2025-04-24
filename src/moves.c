/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:26:52 by alejagom          #+#    #+#             */
/*   Updated: 2025/04/23 19:30:26 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack, char letter)
{
	t_node	*primero;
	t_node	*segundo;
	t_node	*tercero;

	primero = (*stack)->head;
	segundo = primero->next;
	tercero = segundo->next;
	segundo->next = primero;
	primero->next = tercero;
	(*stack)->head = segundo;
	ft_printf("s");
	ft_printf("%c\n", letter);
}

void	rotate(t_stack **stack, char letter)
{
	t_node	*first;
	t_node	*finish;

	first = (*stack)->head;
	finish = (*stack)->head;
	while (finish->next != NULL)
	{
		finish = finish->next;
	}
	(*stack)->head = first->next;
	finish->next = first;
	first->next = NULL;
	ft_printf("r");
	ft_printf("%c\n", letter);
}

void	reverse_rotate(t_stack **stack, char letter)
{
	t_node	*finish;
	t_node	*before;

	finish = (*stack)->head;
	before = NULL;
	while (finish->next != NULL)
	{
		before = finish;
		finish = finish->next;
	}
	before->next = NULL;
	finish->next = (*stack)->head;
	(*stack)->head = finish;
	ft_printf("rr");
	ft_printf("%c\n", letter);
}

void	push(t_stack **from, t_stack **to, char letter)
{
	t_node	*temp;

	if (!from || (*from)->size == 0)
		return ;
	temp = (*from)->head;
	(*from)->head = (*from)->head->next;
	temp->next = (*to)->head;
	(*to)->head = temp;
	(*from)->size--;
	(*to)->size++;
	ft_printf("p");
	ft_printf("%c\n", letter);
}
