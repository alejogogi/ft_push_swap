/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parceo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejagom <alejagom@student.42madird.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:55:20 by alejagom          #+#    #+#             */
/*   Updated: 2025/03/15 09:47:26 by alejagom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int parceo(char *str)
{
    int i;
    
    i = 0;
    if (!str)
    return -1;
    if (str[i] == '-' || str[i] == '+')
    {
	i++;
    }
    while(str[i] != '\0')
    {
		if(!ft_isdigit(str[i]))
			return -1;
	printf("error");
	i++;
	}
return 0;	
}
int main()
{
	char str[2];
	int result;
	
	printf("nuemros a poner:");
	scanf("%s\n", str);
	result = parceo(str);
	if (result == 0)
	printf("resultado correcto\n");
	else
	printf("esta mal");
	return(0);
}