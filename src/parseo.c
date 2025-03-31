/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parseo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:55:20 by alejagom          #+#    #+#             */
/*   Updated: 2025/03/31 23:12:24 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_split(char **split_result)
{
	if (!split_result || !isnumber(split_result))
	{
		free_wd(split_result);
		return (0);
	}
	return (1);
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
	ft_printf("hpta %d\n", num);
	while(i < argc)
	{
		split_res = ft_split(args[i], ' ');
		if (!check_split(split_res))
		return (0);
		j = 0;
		while(split_res[j])
		{
			num++;
			j++;
		}
		free_wd(split_res);
		i++;
	}
	ft_printf("perra %d\n", num);
	return(num);
}

long int	*def_atoi(char **args, int num)
{
	long int	*num_array;
	int	i;
	int	ln;
	char	**strs;

	strs = array_str(args, num);
	int j = 0;
	while(strs[j] != NULL)
	{
		ft_printf("tiene strd[%d]: esto la array%s\n", j, strs);
		j++;
	}
	ln = 1;
	i = 0;
	num_array = (long *)malloc(num *sizeof(long));
	if (!num_array)
		return(NULL);
	while (i < num)
	{
		num_array[i] = ft_atoi(strs[ln++]);
		i++;
	}
	free_wd(strs);
	if(!check_INT(num_array, num) || !check_same(num_array, num))
	{
		//free(num_array);
		return(0);
	}
	return(num_array);
}

long int	*parseo(int argc, char **args)
{
	int	num;
	long int	*array;

	num = leng_total(argc, args);
	ft_printf("longitud de argumentos %d\n", num);
	array = def_atoi(args, num);
	ft_printf("BUENA %d\n", array);

	return (array);
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

