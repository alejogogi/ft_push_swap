/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcion_aux.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 19:20:16 by alejogogi         #+#    #+#             */
/*   Updated: 2025/04/12 12:22:37 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_empty(char *argv)
{
	int	i;

	i = 0;
	if (argv == NULL || argv[0] == '\0')
		return (1);
	while (argv[i] != '\0')
	{
		if (argv[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int	check_digit(char *one)
{
	int	i;

	i = 0;
	while (one[i] != '\0')
	{
		if (i == 0 && (one[i] == '-' || one[i] == '+'))
		{
			i++;
			if (!ft_isdigit(one[i]))
				return (1);
		}
		else if (!ft_isdigit(one[i]))
			return (1);
		i++;
	}
	return (0);
}

int	first_arg(char *argv)
{
	char	**one;
	int		o;

	o = 0;
	one = ft_split(argv, ' ');
	while (one[o])
	{
		if (check_digit(one[o]))
		{
			free_wd(one);
			ft_printf("Error\n");
			return (1);
		}
		o++;
	}
	if (o < 2)
	{
		free_wd(one);
		ft_printf("Error\n");
		return (1);
	}
	free_wd(one);
	return (0);
}

int	ft_leng(char *argv)
{
	int		j;
	int		ln;
	char	**split_result;

	ln = 0;
	j = 0;
	split_result = (ft_split(argv, ' '));
	while (split_result[j] != NULL)
	{
		if (check_digit(split_result[j]) != 0)
		{
			free_wd(split_result);
			return (-1);
		}
		ln++;
		j++;
	}
	free_wd(split_result);
	return (ln);
}
