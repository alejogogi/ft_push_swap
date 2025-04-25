/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejagom <alejagom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:26:52 by alejagom          #+#    #+#             */
/*   Updated: 2025/04/25 17:22:20 by alejagom         ###   ########.fr       */
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
	t_node	*current;
	t_node	*temp;

	if (!(*stack)->head || !(*stack)->head->next)
		return ;
	temp = (*stack)->head;
	(*stack)->head = temp->next;
	current = (*stack)->head;
	while (current->next)
		current = current->next;
	current->next = temp;
	temp->next = NULL;
	ft_printf("r");
	ft_printf("%c\n", letter);
}

void	reverse_rotate(t_stack **stack, char letter)
{
	t_node	*current;
	t_node	*temp;

	if (!(*stack)->head || !(*stack)->head->next)
		return ;
	current = (*stack)->head;
	while (current->next->next)
		current = current->next;
	temp = current->next;
	current->next = NULL;
	temp->next = (*stack)->head;
	(*stack)->head = temp;
	ft_printf("rr%c\n", letter);
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
