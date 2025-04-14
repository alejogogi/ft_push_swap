/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:23:47 by alejagom          #+#    #+#             */
/*   Updated: 2025/04/14 22:56:17 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_array(int *array, int size, char *word)
{
    for (int i = 0; i < size; i++)
    {
	ft_printf("%s", word);
        printf("%d:%d\n", i, array[i]);
    }
}//borrar no permitida

void print_list(t_node *head)
{
    t_node *current = head; // Empezamos desde la cabeza de la lista

    while (current != NULL) // Mientras no lleguemos al final (NULL)
    {
        printf("Stack(A) Número: %d, Índice: %d\n", current->num, current->index);
        current = current->next; // Pasar al siguiente nodo
    }
}

int	main(int argc, char **argv)
{
	int	ln;
	int	*array;
	int	*index;
	t_stacks *stacks;

	ln = 0;
	if (argc < 2)
	{
		ft_printf("numero de argumentos invalido\n");
		return (0);
	}
	ln = check_leng(argc, argv);
	array = ext_atoi(ln, argc, argv);
	check_same(array, ln);
	index = ft_index(array, ln);
	ft_printf("\n");//borrar.
	stacks = create_stack();
	data_stack_a(stacks, array, index, ln);
	print_list(stacks->stack_a);
	ft_printf("\n");//borrar.
	algorithms(stacks, ln);
	ft_printf("\n");//borrar.
	print_array(array, ln, "elemento");
	ft_printf("cantidad de argumentos a guardar %d\n", ln);
	free(array);
	free(index);
	free_nodes(stacks);
	return (0);
}
