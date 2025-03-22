/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parceo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejagom <alejagom@student.42madird.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:55:20 by alejagom          #+#    #+#             */
/*   Updated: 2025/03/22 00:05:59 by alejagom         ###   ########.fr       */
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
	int		ln;
	char	**split_result;
	char	**temp;

	i = 1;
	ln = 0;
	while (args[i] != NULL)
	{
		split_result = ft_split(args[i], ' ');
		temp = split_result;
		while (*temp != NULL)
		{
			ln++;
			temp++;
		} 
		if (!isnumber(split_result) || !single_number(*split_result))
		{
			return (0);
		}
		free_wd(split_result);
		i++;
	}
	printf("longitud de strings separadas %d\n", ln);
	return (1);
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

