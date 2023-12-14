/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:22:37 by kquispe           #+#    #+#             */
/*   Updated: 2023/12/14 18:32:00 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void cap(char c)
{
	printf("%c", c);
	if (c == 'c')
		printf("yes");
	else if (c == 's')
		printf("yes");
	else if (c == 'p')
		printf("yes");
	else if (c == 'd')
		printf("yes");
	else if (c == 'i')
		printf("yes");
	else if (c == 'u')
		printf("yes");
	else if (c == 'x')
		printf("yes");
	else if (c == 'X')
		printf("yes");
	else if (c == '%')
		printf("yes");
	else
		printf("ERROR");
} 

int	ft_printf(char	const *str, ...)
{
	int	i;
	//va_list newdate;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
			cap(str[i + 1]);
		i++;
	}
	return (0);
}