/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:22:37 by kquispe           #+#    #+#             */
/*   Updated: 2023/12/26 21:10:28 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void control_arg(char c, va_list print_s)
{
	if (c == 'c')
		ft_putchar(va_arg(print_s, int));
	else if (c == 's')
		ft_string(va_arg(print_s, char *));
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
	int		i;
	va_list	prt;
	
	i = 0;
	va_start(prt, str);
	while (str[i])
	{
		if (str[i] == '%')
			control_arg(str[++i], prt);
		else
			write(1, &(str[i]), 1);
		i++;
	}
	return (0);
}