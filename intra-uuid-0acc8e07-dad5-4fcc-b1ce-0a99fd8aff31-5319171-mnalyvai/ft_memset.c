/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnalyvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:21:50 by mnalyvai          #+#    #+#             */
/*   Updated: 2022/10/15 19:23:29 by mnalyvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{	
	char	*p;

	p = (char *)b;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (b);
}
/*The memset() function writes len bytes of value 
c (converted to an unsigned char) to the string b.
The memset() function returns its first argument*/
/*int main()
{
	// Пример 1: Заполнение массива символов
	char *str1 = "abcdefghi";
	printf("Before memset: %s\n", str1);

	ft_memset(str1, 'X', 5);
	printf("After memset: %s\n\n", str1);

	return 0;
}*/