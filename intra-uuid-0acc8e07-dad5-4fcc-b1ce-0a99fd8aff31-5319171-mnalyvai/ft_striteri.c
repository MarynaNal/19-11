/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnalyvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:57:35 by mnalyvai          #+#    #+#             */
/*   Updated: 2023/11/03 16:16:08 by mnalyvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	char			*str;
	unsigned int	counter;

	str = (char *)s;
	if (str && f)
	{
		counter = 0;
		while (str[counter])
		{
			(*f)(counter, &str[counter]);
			counter++;
		}
	}
}
/*A cada carácter de la string ’s’, aplica la función
’f’ dando como parámetros el índice de cada
carácter dentro de ’s’ y la dirección del propio
carácter, que podrá modificarse si es necesario.*/
/*void add_A(unsigned int index, char *c)
{
    *c = *c + 'A';
}

int main(void)
{
    char str[] = "Hello, World!";

    printf("Original: %s\n", str); //Hello, World!

    ft_striteri(str, &add_A);

    printf("Modificado: %s\n", str); // Uifmmp, Xpsme!

    return (0);
}*/