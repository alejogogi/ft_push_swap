/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejagom <alejagom@student.42madird.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:23:47 by alejagom          #+#    #+#             */
/*   Updated: 2025/03/18 19:42:07 by alejagom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "push_swap.h"

int main(int argc, char **argv)
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
}