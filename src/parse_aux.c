/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_aux.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:59:53 by alejogogi         #+#    #+#             */
/*   Updated: 2025/03/30 23:04:44 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	isnumber(char **str)
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
			return 0;
			free_wd(str);
		}
		while ((*str)[j] != '\0')
		{
			if (!ft_isdigit((*str)[j]))
			{
				free_wd(str);
				return (0);
			}
			j++;
		}
		str++;
	}
	return (1);
}

char	**mallstr(int num)
{
	char	**strs;

	strs = (char **)malloc((num + 1) * sizeof(char *));
	if (!strs)
	{
		return (0);
	}
	return(strs);
}

char    **split_restore(char *arg, char **strs, int *ln)
{
    char    **split_result;
    int j;

    j = 0;
    split_result = ft_split(arg, ' ');
    if (!split_result)
    {
        free(strs);
        return (0);
    }
    while (split_result[j])
    {
        strs[*ln] = split_result[j];
        (*ln)++;
        j++;
    }
    free(split_result);
    return (strs);
}

char    **array_str(char **agrs, int num)
{
    char    **strs;
    int i;
    int ln;

    strs = mallstr(num);
    if (!strs)
        return (0);
    i = 0;
    ln = 0;
    while (agrs[i])
    {
        if (!split_restore(agrs[i], strs, &ln))
            return (0);
        i++;
    }
    strs[ln] = NULL;
    return (strs);
}

int	check_INT(int *array, int num)
{
	int	i;
	long	arg;

	i = 0;
	while(i < num)
	{
		arg = (long)array[i];
		if(arg > INT_MAX || arg < INT_MIN)
		{
			ft_printf("error es mayor que el INT_MAX y el INT_MIN\n");
			free(array);
			return(0);
		}
	}
	return(1);
}

int	check_same(int *array, int num)
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
				free(array);
				return(0);
			}
			j++;
		}
		i++;
	}
	return(1);
}
