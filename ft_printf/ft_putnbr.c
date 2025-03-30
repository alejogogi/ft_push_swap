/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejogogi <alejogogi@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:34:28 by alejogogi         #+#    #+#             */
/*   Updated: 2025/01/09 21:16:52 by alejogogi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int num)
{
	long	n;
	int		ln;

	n = num;
	ln = 0;
	if (num < 0)
	{
		ln += ft_putchar('-');
		n = n * -1;
	}
	if (n >= 10)
	{
		ln = ln + ft_putnbr(n / 10);
	}
	ln += ft_putchar((n % 10) + 48);
	return (ln);
}

/*int	main (void)
{
	int c = -123;
	
	ft_printf("caracter %i", c);
	//printf("numero correcto %d \n", c);
	return (0);
}
*/