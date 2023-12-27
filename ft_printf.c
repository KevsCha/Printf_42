/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:22:37 by kquispe           #+#    #+#             */
/*   Updated: 2023/12/27 20:01:56 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_control_arg(char c, va_list print_s)
{
	void *d = "hola";
	if (c == 'c')
		ft_putchar(va_arg(print_s, int));
	else if (c == 's')
		ft_string(va_arg(print_s, char *));
	else if (c == 'p')
		ft_printf_ptr(va_arg(print_s, void *));
	else if (c == 'd')
		ft_itoa(va_arg(print_s, int));
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
	int		cont;
	va_list	prt;
	
	i = 0;
	cont = 0;
	va_start(prt, str);
	while (str[i])
	{
		if (str[i] == '%')
			ft_control_arg(str[++i], prt);
		else
			write(1, &(str[i]), 1);
		i++;
	}
	return (0);
}