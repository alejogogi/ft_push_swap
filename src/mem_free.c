/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_free.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:27:27 by alejogogi         #+#    #+#             */
/*   Updated: 2025/04/13 23:09:06 by alejogogi        ###   ########.fr       */
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

	lista = stakcs->stack_a;
	lista_2 = stakcs->stack_b;
	while (lista)
	{
		temp = lista->next;
		free(lista); // Liberar el nodo actual uno a uno de toda la lista para evitar fugas de memoria
		lista = temp; // apunta al siguiente nodo para no perderse en la lista enlazada,
	}
	while (lista_2)
	{
		temp = lista_2->next;
		free(lista_2); // Liberar el nodo actual uno a uno de toda la lista para evitar fugas de memoria
		lista_2 = temp; // apunta al siguiente nodo para no perderse en la lista enlazada,
	}
	free(stakcs);
	exit(1);
}
