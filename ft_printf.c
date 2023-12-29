/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:22:37 by kquispe           #+#    #+#             */
/*   Updated: 2023/12/29 17:48:34 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_control_arg(char c, va_list print_s)
{
	if (c == 'c')
		ft_putchar(va_arg(print_s, int));
	else if (c == 's')
		ft_string(va_arg(print_s, char *));
	else if (c == 'p')
		ft_printf_ptr(va_arg(print_s, void *));
	else if (c == 'd' || c == 'i')
		ft_itoa(va_arg(print_s, int));
	else if (c == 'u')
		ft_uns_num(va_arg(print_s, unsigned int));
	else if (c == 'x')
		ft_hexa(va_arg(print_s, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		ft_hexa(va_arg(print_s, unsigned int), "0123456789ABCDEF");
	else if (c == '%')
		ft_putchar('%');
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