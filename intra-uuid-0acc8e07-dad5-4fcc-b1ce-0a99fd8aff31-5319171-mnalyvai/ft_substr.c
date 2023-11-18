/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnalyvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:10:50 by mnalyvai          #+#    #+#             */
/*   Updated: 2023/11/09 20:11:09 by mnalyvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	k;

	k = 0;
	if (!s)
		return (NULL);
	while (s[k])
		k++;
	if (start > k)
		len = 0;
	if (len > k - start)
		len = k - start;
	substr = malloc(sizeof(char) * len + 1);
	if (!substr)
		return (NULL);
	k = 0;
	while (len--)
	{
		substr[k] = s[start];
		k++;
		start++;
	}
	substr[k] = 0;
	return (substr);
}
/*Reserva (con malloc(3)) y devuelve una substring de
la string ’s’.
La substring empieza desde el índice ’start’ y
tiene una longitud máxima ’len’.*/
/*int main(void)
{
    const char *s = "Hello, World!";
    unsigned int start = 7;
    size_t len = 5;

    char *substr = ft_substr(s, start, len);

    if (substr != NULL)
    {
        printf("Substring: %s\n", substr);
        free(substr); // Remember to free the allocated memory
    }
    else
    {
        printf("Error: Unable to create substring.\n");
    }

    return (0);
}*/