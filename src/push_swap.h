/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:23:40 by alejagom          #+#    #+#             */
/*   Updated: 2025/03/30 23:05:00 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"
# include <stdio.h>
# include <limits.h>
# include <stddef.h>

typedef struct  s_node
{
	int		num;
	int		s_index;
	struct s_node	*next	
}			t_node;

typedef struct  s_stack
{
	t_node		*stack_a;
	t_node		*stack_b;
}			t_stacks;

int		parseo(int argc, char **args);
int		isnumber(char **str);
int		*def_atoi(char **args, int num);
void		free_wd(char **words);
void 		free_stacks(t_stacks *stacks);
char		**array_str(char **agrs, int num);
char    	**split_restore(char *arg, char **strs, int *ln);
char		**mallstr(int num);
int		check_INT(int *array, int num);
int		check_same(int *array, int num);



#endif
