/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_free.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:27:27 by alejogogi         #+#    #+#             */
/*   Updated: 2025/04/12 22:51:44 by alejogogi        ###   ########.fr       */
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

void	free_nodes(t_node current, t_stacks *stakc_a)
{
	t_node *lista  = stakc_a;
        while (lista)
	{
		t_node *temp = lista -> next;
		free(lista); // Liberar el nodo actual uno a uno de toda la lista para evitar fugas de memoria
		lista = temp;//apunta al siguiente nodo para no perderse en la lista enlazada,
        }
        exit(1);
}

//hoy avanzamos demaciado en el push y aprendimos a como avanzamos en el como aprendimos a iniciar nuestras listas enlazadas, hoy tuvimos un gran
//avance, nos falta estudirar bien como iniciar como tal la lista enlzada y como uxar el algoritmo bien para organizar.