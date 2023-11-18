/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnalyvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:20:49 by mnalyvai          #+#    #+#             */
/*   Updated: 2023/11/09 20:26:49 by mnalyvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
/*The strchr() function locates the first occurrence of c (converted to
a char) in the string pointed to by s*/
/*int main(void)
{
    const char *str = "Hello, World!";
    int target_char = 'o';

    char *result = ft_strchr(str, target_char);

    if (result != NULL)
    {
        printf("Character '%c' found at position: %ld\n", 
        target_char, result - str);
    }
    else
    {
        printf("Character '%c' not found in the string.\n", target_char);
    }

    return (0);
}*/