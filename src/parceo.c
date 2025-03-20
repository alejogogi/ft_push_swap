/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parceo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:55:20 by alejagom          #+#    #+#             */
/*   Updated: 2025/03/20 23:27:53 by alejogogi        ###   ########.fr       */
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

int	parceo(char **args)
{
	int		i;
	char	**split_result;
	char	**tmep;

	i = 1;
	while (args[i] != NULL)
	{
		split_result = ft_split(args[i], ' ');
		tmep = split_result;
		while (*tmep == NULL)
		{
			tmep++;
			free(split_result);
			return (0);
		}
		if (!isnumber(split_result) || !single_number(*split_result))
		{
			return (0);
		}
		free_wd(split_result);
		i++;
	}
	return (1);
}
