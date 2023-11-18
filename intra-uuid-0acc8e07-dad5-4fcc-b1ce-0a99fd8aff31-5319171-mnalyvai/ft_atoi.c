/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnalyvai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:27:12 by mnalyvai          #+#    #+#             */
/*   Updated: 2023/11/18 14:03:21 by mnalyvai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	number;
	int	sign;

	number = 0;
	sign = 1;
	while (*str == 32 || *str == '\n' || *str == '\r' || *str == '\v'
		|| *str == '\f' || *str == '\t')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = sign * (-1);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10;
		number = number + *str - 48;
		str++;
	}	
	return (number * sign);
}
//onvert ASCII string to integer
/*int main ()
{
	char *word = "123456789";
	int a;
	a = ft_atoi(word);
	printf("el entero convertido es %i", a);
	return (0);
}*/
