/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnalyvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:11:28 by mnalyvai          #+#    #+#             */
/*   Updated: 2023/04/09 20:32:25 by mnalyvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	while (src[src_len] != '\0' )
		src_len ++;
	if (size == 0)
	{
		return (src_len);
	}
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
/*The strlcpy() and strlcat() functions copy and concatenate strings with
the same input parameters and output result as snprintf(3).  They are
designed to be safer, more consistent, and less error prone replacements
for the easily misused functions strncpy(3) and strncat(3).*/
/*int main (void){
	char dst[10] = "123456789"; // Объявление массива с достаточным пространством
    const char *src = "543210";
    size_t sizeFin;
    sizeFin = ft_strlcpy(dst, src, 6);
    printf("результат: %zu\n", sizeFin);
	 printf("результат: %s", dst);
    return (0);
}*/