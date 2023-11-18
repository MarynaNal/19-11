/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnalyvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 18:27:17 by mnalyvai          #+#    #+#             */
/*   Updated: 2023/04/09 20:27:19 by mnalyvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*pointer;
	int		i;

	i = 0;
	pointer = malloc(sizeof(char) * (ft_strlen((char *)s1) + 1));
	if (!pointer || !s1)
		return (NULL);
	while (*(s1 + i))
	{
		*(pointer + i) = *(s1 + i);
		i++;
	}
	*(pointer + i) = 0;
	return (pointer);
}
