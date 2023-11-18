/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnalyvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:21:09 by mnalyvai          #+#    #+#             */
/*   Updated: 2022/10/15 19:21:20 by mnalyvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*The strlen() function computes the length 
of the string s.
The strlen() function returns the number of characters
 that precede the terminating NUL character.*/
/*int	main(void)
{
	char stroka[] = "";
	char *p;
	p = &stroka[0];
	int a = ft_strlen(p);
	printf("%d", a);

}*/
