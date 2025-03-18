/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parceo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejagom <alejagom@student.42madird.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:55:20 by alejagom          #+#    #+#             */
/*   Updated: 2025/03/18 19:48:51 by alejagom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_wd(char **words)
{
	
}

int parceo(char **args) {
    int i = 1;
    int j;
    char **strs;
    char **split_result;
	char **tmp;

    while (args[i] != NULL) 
	{
        split_result = ft_split(args[i], ' ');
		strs = split_result;
        while (*strs != NULL)
		{
            j = 0;
            if ((*strs)[j] == '-' || (*strs)[j] == '+') {
                j++;
            }
            while ((*strs)[j] != '\0') 
			{
                if (!isdigit((*strs)[j]))
				{
                    free(split_result);
                    return 0;
                }
                j++;
            }
            strs++;
        }
        free(split_result);
        i++;
    }
    return 1; 
}
