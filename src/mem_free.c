/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_free.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:27:27 by alejogogi         #+#    #+#             */
/*   Updated: 2025/04/19 11:47:14 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_wd(char **words)
{
	int	i;

	i = 0;
	if (words == NULL)
		return ;
	while (words[i])
	{
		free(words[i]);
		i++;
	}
	free(words);
}

void	free_nodes(t_stacks *stakcs)
{
	t_node	*lista;
	t_node	*lista_2;
	t_node	*temp;

	lista = stakcs->stack_a->head;
	lista_2 = stakcs->stack_b->head;
	while (lista)
	{
		temp = lista->next;
		free(lista);
		lista = temp;
	}
	while (lista_2)
	{
		temp = lista_2->next;
		free(lista_2);
		lista_2 = temp;
	}
	free(stakcs->stack_a);
	free(stakcs->stack_b);
	free(stakcs);
	exit(1);
}
