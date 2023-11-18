/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnalyvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 20:00:12 by mnalyvai          #+#    #+#             */
/*   Updated: 2023/11/18 18:08:59 by mnalyvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*b;
	size_t			i;

	b = (unsigned char *) s;
	c = (unsigned char) c;
	i = 0;
	while (i < n)
	{	
		if (b [i] == c)
			return ((void *)b + i);
		i++;
	}
	return (NULL);
}

/*DESCRIPTION
The memchr() function locates the first occurrence of c (converted to an
unsigned char) in string s.
RETURN VALUES
The memchr() function returns a pointer to the byte located, or NULL if
 no such byte exists within n bytes. */
// main(void)
//{
//    const char *str = "Hello, World!";
//    int target_char = 'o';
//    size_t n = 7;

//   void *result = ft_memchr(str, target_char, n);

//   if (result != NULL)
//    {
//        printf("Character '%c' found in the memory at position: %ld\n", 
//        target_char, (char *)result - str);
//    }
//    else
//    {
//        printf("Character '%c' not found in the memory.\n", target_char);
//    }

//    return (0);
//
