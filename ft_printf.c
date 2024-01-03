/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:22:37 by kquispe           #+#    #+#             */
/*   Updated: 2024/01/03 15:56:05 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_control_arg(char c, va_list print_s, int *cont)
{
	if (c == 'c')
		(*cont) += ft_putchar(va_arg(print_s, int));
	else if (c == 's')
		(*cont) += ft_string(va_arg(print_s, char *));
	else if (c == 'p')
		(*cont) += ft_printf_ptr(va_arg(print_s, void *));
	else if (c == 'd' || c == 'i')
		(*cont) += ft_itoa(va_arg(print_s, int));
	else if (c == 'u')
		(*cont) += ft_uns_num(va_arg(print_s, unsigned int));
	else if (c == 'x')
		(*cont) += ft_hexa(va_arg(print_s, unsigned long), "0123456789abcdef");
	else if (c == 'X')
		(*cont) += ft_hexa(va_arg(print_s, unsigned long), "0123456789ABCDEF");
	else if (c == '%')
		(*cont) += ft_putchar('%');
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
			ft_control_arg(str[++i], prt, &cont);
		else
			cont += ft_putchar(str[i]);
		i++;
		if (cont == -1)
			return (-1);
	}
	return (cont);
}
