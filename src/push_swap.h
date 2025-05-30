/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejagom <alejagom@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:23:40 by alejagom          #+#    #+#             */
/*   Updated: 2025/05/05 19:11:27 by alejagom         ###   ########.fr       */
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
	t_node			*head;
	int				size;
}					t_stack;

typedef struct s_stacks
{
	t_stack			*stack_a;
	t_stack			*stack_b;
}					t_stacks;

int					check_leng(int argc, char **argv);
void				check_same(int *array, int ln);

void				free_wd(char **words);
void				free_nodes(t_stacks *stakcs);

int					ft_leng(char *argv);
int					first_arg(char *argv);
int					check_digit(char *one);
int					check_empty(char *argv);

int					*ext_atoi(int ln, int argc, char **argv);
int					*save_mem(int ln);
int					ft_limits(long res);

int					*ft_index(int *array, int ln);
void				cpy_nums(int ln, int *array, int *num);
int					count_index(t_node *node, int index);
void				assing_index(int *array, int *num, int *indexes, int ln);

t_stacks			*create_stack(void);
t_node				*create_node(int num, int index, t_stacks **stacks);
void				data_stack_a(t_stacks **stakcs, int *array, int *index,
						int ln);
t_node				*search_min(t_stack *stack);

void				rotate(t_stack **stack, char letter);
void				reverse_rotate(t_stack **stack, char letter);
void				swap(t_stack **stack, char letter);
void				push(t_stack **from, t_stack **to, char letter);

void				algorithms(t_stacks *t_stacks, int ln, int *ar, int *in);
void				bubble_sort(int ln, int *num);
void				case_three(t_stack **stack, char letter);
void				case_seven(t_stacks **stakcs);
void				k_sort2(t_stacks **s, int ln);
void				k_sort1(t_stacks **stacks, int ln);

#endif
