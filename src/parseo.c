/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parseo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:55:20 by alejagom          #+#    #+#             */
/*   Updated: 2025/04/03 16:52:58 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_split(char **split_result)
{
	if (!split_result)
	{
		free_wd(split_result);
	}
	else
	{
		isnumber(split_result);
		ft_printf("error\n");
	}
}

/* int leng_total(int argc, char **args)
{
    int     i;
    int j;
    int num;
    char    **split_res;

    i = 1;
    num = 0;
    ft_printf("Valor inicial de num: %d\n", num);
    while (i < argc)
    {
        split_res = ft_split(args[i], ' ');
        if (!split_res)
            return (0);
        j = 0;
        while (split_res[j])
        {
            num++;
            j++;
        }
        free_wd(split_res);
        i++;
    }
    ft_printf("Valor final de num: %d\n", num);
    return (num);
} */

int	leng_total(int argc, char **args)
{
	int 	i;
	int	j;
	int	num;
	char	**split_res;

	i = 1;
	num = 0;
	while(i < argc)
	{
		split_res = ft_split(args[i], ' ');
		check_split(split_res);
		j = 0;
		while(split_res[j])
		{
			num++;
			j++;
		}
		free_wd(split_res);
		i++;
	}
	ft_printf("LONGITUD DE NUM %d\n", num);
	return(num);
}

int	*def_atoi(char **args, int num)
{
	int	i;
	int	ln;
	int 	*array;
	char	**split_res;
	int g;

	i = 1;
	ln = 0;
	array = (int *)malloc(sizeof(int) * num);
	while (i < num)
	{
		split_res = ft_split(args[i], ' ');
		
		if (!split_res)
		{
			free(array);
			// ft_printf("Error\n");
		}
		split_number(split_res, array, &ln);
		for (g = 0; array[g]; g++)
		{
		    printf("VAMOS %d\n", array[g]);
		}
		i++;
	}
	return(array);
}

int	*parseo(int argc, char **args)
{
	int	num;
	int	*numbers;
	int	i = 0;

	num = leng_total(argc, args);
	ft_printf("longitud de argumentos %d\n", num);
	numbers = def_atoi(args, num);
	while(!numbers[i])
	{
		ft_printf("BUENA %d\n", numbers[i]);
		i++;
	}
	return (numbers);
}
/* int parceo(char **args)
{
    int     i;
    int     ln;
    char    **split_result;
    char    **temp;

    i = 1;
    ln = 0;
    while (args[i] != NULL)
    {
        // Dividir el argumento actual en palabras usando ft_split
        split_result = ft_split(args[i], ' ');
        if (!split_result) {
            printf("Error en ft_split.\n");
            return (0);
        }

        // Recorrer split_result y contar las palabras
        temp = split_result;
        while (*temp != NULL) {
            ln++; // Incrementar por cada palabra
            temp++;
        }

        // Validar cada palabra
        if (!isnumber(split_result) || !single_number(*split_result)) {
            free_wd(split_result);
            return (0);
        }

        // Liberar memoria de split_result
        free_wd(split_result);

        // Pasar al siguiente argumento
        i++;
    }

    // Imprimir la longitud total
    printf("longitud de strings separadas %d\n", ln);
    return (1);
} */

