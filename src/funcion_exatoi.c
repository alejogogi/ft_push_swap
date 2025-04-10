/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcion_exatoi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:34:41 by alejogogi         #+#    #+#             */
/*   Updated: 2025/04/10 19:40:31 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*save_mem(int ln)
{
	int	*array;

	array = (int *)malloc(ln * sizeof(int));
	if(!array)
	{
		ft_printf("error\n");
	}
	return(array);
}

void	aux_atoi(char **temp, int *array, int *ps)
{
	int	i;

	i = 0;
	while(temp[i] != NULL)
	{
		array[*ps] = ft_atoi(temp[i]);
		i++;
		(*ps)++;
	}
	free_wd(temp);
}
int	*ext_atoi(int ln, int argc, char **argv)
{
	int	*array;
	char	**temp;
	int	ps;
	int	i;

	i = 1;
	ps = 0;
	array = save_mem(ln);
	if (!array)
		return (NULL);
	while (i < argc)
	{
		temp = ft_split(argv[i], ' ');
		if(!temp)
		{
			free(array);
			ft_printf("error\n");
		}
		aux_atoi(temp, array, &ps);
		i++;
	}
	return (array);
}