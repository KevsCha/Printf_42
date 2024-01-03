/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:22:37 by kquispe           #+#    #+#             */
/*   Updated: 2024/01/02 16:51:45 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_control_arg(char c, va_list print_s, int *count)
{
	printf("[contador]: %d\n", *count);
	(*count)++;
	printf("[contador]: %d\n", *count);
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
		ft_hexa(va_arg(print_s, unsigned long), "0123456789abcdef");
	else if (c == 'X')
		ft_hexa(va_arg(print_s, unsigned long), "0123456789ABCDEF");
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

	int let = 0;
	
	i = 0;
	cont = 0;
	va_start(prt, str);
	while (str[i])
	{
		if (str[i] == '%')
			ft_control_arg(str[++i], prt, &let);
		else
			ft_putchar(str[i]);
		i++;
	}
	printf("[contador principal]:%d\n", let);
	return (cont);
}