/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_lett.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:06:55 by kquispe           #+#    #+#             */
/*   Updated: 2023/12/27 22:02:00 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_string(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return ;	
	}
	while (str[i])
		ft_putchar(str[i++]);
}
unsigned long ft_hexa(unsigned long mem)
{
	int				i;
	int				res;
	unsigned long	aux;
	char			*ta_hexa;
	char			*str;
	
	i = 1;
	ta_hexa = "0123456789abcdef";
	aux = mem;
	while (aux / 16 != 0)
	{
		i++;
		aux /= 16;
	}
	str = (char *)ft_calloc((size_t)(i + 1), sizeof(char));
	if (!str)
		return (0);
	while (mem / 16 != 0)
	{
		res = mem % 16;
		str[--i] = ta_hexa[res];
		mem /= 16;
	}
	str[0] = ta_hexa[mem % 16];
	ft_string(str);
	return (0);
}
void	ft_printf_ptr(void *ptr)
{
	unsigned long	add_ptr;
	unsigned long	len;
	int				i;

	i = 0;
	add_ptr = (unsigned long)ptr;
	len = len_str(add_ptr);
	printf("\n%lu__%lu__%p\n", len, add_ptr, ptr);
	len = ft_hexa(add_ptr);
	
}
/*
void	ft_printf_i()
{
	
}
*/