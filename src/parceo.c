/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parceo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejagom <alejagom@student.42madird.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:55:20 by alejagom          #+#    #+#             */
/*   Updated: 2025/03/15 21:21:09 by alejagom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int parceo(char **args)
{
    int 	i;
    int 	j;
	
    i = 1;
    while (args[i] != NULL)
	{
		j = 0;
		//split va antes para separar la cadena y tratar cada argumento
		if (args[i][j] == '-' || args[i][j] == '+')
			j++;
		while(args[i][j] != '\0')
		{
			if(!ft_isdigit(args[i][j]))
			{
				return 0;
			}
			j++;
		}
		i++;
	}
	return 1;	
}
/* int main(int argc, char **argv)
{
	int result;
	
	if(argc < 2)
	{
	printf("numero de argumentos invalido\n");
	return 1;
	}	
	result = parceo(argv);
	if (result == 0)
	printf("esta mal");
	else 
	printf("resultado correcto\n");
	return(0);
} */