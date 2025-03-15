/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parceo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejagom <alejagom@student.42madird.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:55:20 by alejagom          #+#    #+#             */
/*   Updated: 2025/03/15 07:35:44 by alejagom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int parceo(const char *str, ...)
{
    va_list args;
    int i;
    int ln:
    
    i = 0;
    if (str == NULL || str == '\0')
    return NULL;
    while(str[i])
    {
	if(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
	return NULL;
    }
}   