/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:23:40 by alejagom          #+#    #+#             */
/*   Updated: 2025/04/10 19:54:31 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"
# include <limits.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>

/* typedef struct  s_node
{
	int		num;
	int		s_index;
	struct s_node	*next
}			t_node;

typedef struct  s_stack
{
	t_node	*stack_a;
	t_node	*stack_b;
}			t_stacks; */

int			check_leng(int argc, char **argv);
int			ft_leng(char *argv);
void		free_wd(char **words);
int			first_arg(char *argv);
int			check_digit(char *one);
int			check_empty(char *argv);
int 			*ext_atoi(int ln, int argc, char **argv);
void		check_same(int *array, int ln);

#endif
