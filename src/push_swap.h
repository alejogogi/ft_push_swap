/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejagom <alejagom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:23:40 by alejagom          #+#    #+#             */
/*   Updated: 2025/04/17 20:14:59 by alejagom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"
# include <limits.h>
# include <stddef.h>
# include <stdlib.h>

typedef struct s_node
{
	int				num;
	int				index;
	struct s_node	*next;
}					t_node;

typedef struct s_stack
{
	t_node			*stack_a;
	t_node			*stack_b;
}					t_stacks;

int					check_leng(int argc, char **argv);
int					ft_leng(char *argv);

void				free_wd(char **words);
void				free_nodes(t_stacks *stakcs);

int					first_arg(char *argv);
int					check_digit(char *one);
int					check_empty(char *argv);
int					*ext_atoi(int ln, int argc, char **argv);
int					*save_mem(int ln);
void				check_same(int *array, int ln);
int					*ft_index(int *array, int ln);
void				bubble_sort(int ln, int *num);
void				print_array(int *array, int size, char *word); // borrar no permitida.
void 				print_list(t_node *head);//borrar.
int					ft_limits(long res);

t_stacks			*create_stack(void);
int					search_min(t_node *stakc);
int					search_max(t_node *stakc);
t_node				*create_node(int num, int index, t_stacks *stacks);
void				algorithms(t_stacks *t_stacks, int ln);
void				data_stack_a(t_stacks *stakcs, int *array, int *index,
						int ln);
void				rotate(t_node **stack, char letter);
void    			reverse_rotate(t_node **stack, char letter);
void				swap(t_node *stack, char letter);

#endif
