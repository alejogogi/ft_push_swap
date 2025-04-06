/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_aux.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:59:53 by alejogogi         #+#    #+#             */
/*   Updated: 2025/04/03 16:52:14 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	isnumber(char **str)
{
	int		j;

	while (*str != NULL)
	{
		j = 0;
		if ((*str)[j] == '-' || (*str)[j] == '+')
		{
			j++;
		}
		if ((*str)[j] == '\0')
		{
			ft_printf("error\n");
			free_wd(str);
		}
		while ((*str)[j] != '\0')
		{
			if (!ft_isdigit((*str)[j]))
			{
				free_wd(str);
				ft_printf("error\n");
			}
			j++;
		}
		str++;
	}
}

void    split_number(char **args, int *array, int *ln)
{
    int	j;
    
    j = 0;
    while(args[j])
    {
	array[*ln] = ft_atoi(args[j]);
	(*ln)++;
	j++;
    }
    free_wd(args);
}

int	check_same(long *array, int num)
{
	int	i;
	int	j;

	i = 0;
	while(i < num)
	{
		j = i + 1;
		while(j < num)
		{
			if (array[i] == array[j])
			{
				ft_printf("numero repetido\n");
				//free(array);
				return(0);
			}
			j++;
		}
		i++;
	}
	return(1);
}
