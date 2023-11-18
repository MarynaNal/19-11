/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnalyvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:40:12 by mnalyvai          #+#    #+#             */
/*   Updated: 2023/04/09 19:59:37 by mnalyvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

void	*ft_calloc(size_t num, size_t elsize)
{
	unsigned char	*puntero;

	if (num == SIZE_MAX || elsize == SIZE_MAX)
		return (NULL);
	puntero = malloc (num * elsize);
	if (!puntero)
		return (NULL);
	ft_bzero(puntero, elsize * num);
	return (puntero);
}
/*
The calloc() function contiguously allocates enough space for count
objects that are size bytes of memory each and returns a pointer to the
allocated memory.  The allocated memory is filled with bytes of value zero.
*/
