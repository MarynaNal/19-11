/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnalyvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:31:09 by mnalyvai          #+#    #+#             */
/*   Updated: 2023/11/10 13:55:25 by mnalyvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_string;
	unsigned int	i;

	if (!s)
		return (NULL);
	new_string = malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!new_string)
		return (NULL);
	i = 0;
	while (*(s + i))
	{
		*(new_string + i) = f(i,*(s + i));
		i++;
	}
	*(new_string + i) = 0;
	return (new_string);
}
/*
A cada carácter de la string ’s’, aplica la
función ’f’ dando como parámetros el índice de cada
carácter dentro de ’s’ y el propio carácter. Genera
una nueva string con el resultado del uso sucesivo
de ’f’
*/
/*char uppercase_mapping(unsigned int index, char c)
{
    if (c >= 'a' && c <= 'z')
        return c - 'a' + 'A';
    return c;
}

int main(void)
{
    const char *s = "Hello, World!";

    char *result = ft_strmapi(s, &uppercase_mapping);

    if (result != NULL)
    {
        printf("String: %s\n", result);
    }
    else
    {
        printf("Error.\n");
    }

    return (0);
}*/