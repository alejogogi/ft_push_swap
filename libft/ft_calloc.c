/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:39:16 by alejogogi         #+#    #+#             */
/*   Updated: 2025/04/09 20:15:11 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	ptr = malloc(num * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, num * size);
	return (ptr);
}

/*
int	main(void)
{
	int *arr;
	int n = 5;

	arr = (int *)calloc(n, sizeof(int));
	if (arr == NULL)
	{
		printf("Error: no se pudo asignar memoria.\n");
		return (1);
	}
	printf("Valores iniciales:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	free(arr);
	return (0);
}
*/