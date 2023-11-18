/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnalyvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 20:07:32 by mnalyvai          #+#    #+#             */
/*   Updated: 2023/04/09 20:23:39 by mnalyvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst <= src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len-- > 0)
			*((char *)(dst + len)) = *((char *)(src + len));
	}
	return (dst);
}
/*
 The memmove() function copies len bytes from string src to string dst.  The two
 strings may overlap; the copy is always done in a non-destructive manner.*/
