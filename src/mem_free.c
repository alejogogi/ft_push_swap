/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_free.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 20:27:27 by alejogogi         #+#    #+#             */
/*   Updated: 2025/04/09 20:43:53 by alejogogi        ###   ########.fr       */
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
