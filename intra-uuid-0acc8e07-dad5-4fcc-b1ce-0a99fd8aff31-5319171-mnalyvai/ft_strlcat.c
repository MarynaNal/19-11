/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnalyvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:56:40 by mnalyvai          #+#    #+#             */
/*   Updated: 2023/04/09 20:31:22 by mnalyvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;
	size_t	len;

	i = 0;
	src_len = ft_strlen((char *)src);
	dst_len = ft_strlen(dst);
	len = dst_len;
	if (dst_len >= dstsize || dstsize == 0)
		return (dstsize + src_len);
	while (src[i] != 0 && i < dstsize - dst_len - 1)
	{
		dst[len] = src[i];
		i++;
		len++;
	}
	dst[len] = 0;
	return (dst_len + src_len);
}
