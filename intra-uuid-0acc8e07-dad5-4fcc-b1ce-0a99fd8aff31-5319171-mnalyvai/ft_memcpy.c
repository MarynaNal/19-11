/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnalyvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:24:40 by mnalyvai          #+#    #+#             */
/*   Updated: 2023/10/29 19:56:45 by mnalyvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destin, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*sour;

	dest = (unsigned char *)destin;
	sour = (unsigned char *)src;
	i = 0;
	if (dest == sour)
		return (dest);
	while (i < n)
	{
		dest[i] = sour[i];
		i++;
	}
	return (dest);
}

/*ft_memcpy copies n bytes from memory area src to memory area
dst.  If dst and src overlap, behavior is undefined.  Applications in
which dst and src might overlap should use memmove(3) instead.*/
