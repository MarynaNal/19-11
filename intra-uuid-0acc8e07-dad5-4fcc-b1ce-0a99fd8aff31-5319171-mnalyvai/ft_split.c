/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnalyvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:55:33 by mnalyvai          #+#    #+#             */
/*   Updated: 2023/11/10 13:23:01 by mnalyvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	words(char *str, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (*(str + i))
	{
		while (*(str + i) && *(str + i) == c)
		i++;
		if (*(str + i) && *(str + i) != c)
		{
			while (*(str + i) && *(str + i) != c)
				i++;
			words++;
		}
	}
	return (words);
}

static char	**free_array(char **arr)
{
	while (arr)
	{
		while (*arr)
		{
			free(*arr);
			arr++;
		}
		free(arr);
		arr++;
	}
	return (NULL);
}

static char	**check_memory_for_malloc(char const *s, int n_words)
{
	char	**array;

	if (!s)
		return (NULL);
	array = malloc(sizeof(char *) * (n_words + 1));
	if (!array)
		return (NULL);
	array[n_words] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char			**array;
	int				n_words;
	size_t			i;
	unsigned int	start;
	int				position;

	i = 0;
	position = 0;
	n_words = words((char *)s, c);
	array = check_memory_for_malloc(s, n_words);
	if (!array)
		return (NULL);
	while (*(s + i) && position < n_words)
	{
		while (*(s + i) && *(s + i) == c)
		i++;
		start = i;
		while (*(s + i) && *(s + i) != c)
		i++;
		array[position] = ft_substr(s, start, i - start);
		if (!array[position])
			free_array(array);
		position++;
	}
	return (array);
}
/*
s: La string a separar.
c: El carácter delimitador.
*/
