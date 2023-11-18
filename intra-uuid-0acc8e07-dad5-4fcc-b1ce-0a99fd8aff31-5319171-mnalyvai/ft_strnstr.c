/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnalyvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 20:34:40 by mnalyvai          #+#    #+#             */
/*   Updated: 2023/04/09 20:40:19 by mnalyvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	j = 0;
	while (j < len && haystack[j])
	{
		i = 0;
		while (j < len && needle[i] && haystack[j] && needle[i] == haystack[j])
		{
			++i;
			++j;
		}
		if (needle[i] == '\0')
			return ((char *)&haystack[j - i]);
		j = j - i + 1;
	}
	return (0);
}
/*The strnstr() function locates the first occurrence of the null-termi-
nated string needle in the string haystack, where not more than len
characters are searched*/
/*int main(void)
{
    const char *haystack = "Hello, World!";
    const char *needle = "World";
    size_t len = 20;

    char *result = ft_strnstr(haystack, needle, len);

    if (result != NULL)
    {
        printf("Needle '%s' found in the haystack at position: 
		%ld\n", needle, result - haystack);
    }
    else
    {
        printf("Needle '%s' not found in the haystack.\n", needle);
    }

    return (0);
}*/