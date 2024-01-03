/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_lett.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:06:55 by kquispe           #+#    #+#             */
/*   Updated: 2024/01/03 15:40:25 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned long	ft_hexa_ptr(unsigned long mem, size_t len)
{
	int				res;
	int				cont;
	char			*ta_hexa;
	char			*str;

	cont = 0;
	ta_hexa = "0123456789abcdef";
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (-1);
	while (mem / 16 != 0)
	{
		res = mem % 16;
		str[--len] = ta_hexa[res];
		mem /= 16;
	}
	str[0] = ta_hexa[mem % 16];
	ft_string("0x");
	ft_string(str);
	cont = ft_strlen(str) + 2;
	return (free(str), cont);
}

int	ft_printf_ptr(void *ptr)
{
	unsigned long	add_ptr;
	unsigned long	temp;
	unsigned long	len;
	size_t			i;

	i = 1;
	add_ptr = (unsigned long)ptr;
	temp = add_ptr;
	while (temp / 16 != 0)
	{
		i++;
		temp /= 16;
	}
	len = ft_hexa_ptr(add_ptr, i);
	return (len);
}

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_string(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
		ft_putchar(str[i++]);
	return (ft_strlen(str));
}

int	ft_hexa(unsigned int num, char *bas)
{
	unsigned int	temp;
	size_t			i;
	char			*str;
	int				cont;

	i = 1;
	cont = 0;
	temp = num;
	while (temp / 16 != 0)
	{
		i++;
		temp /= 16;
	}
	str = (char *)ft_calloc(i + 1, sizeof(char));
	if (!str)
		return (-1);
	while (num / 16 != 0)
	{
		str[--i] = bas[num % 16];
		num /= 16;
	}
	str[0] = bas[num % 16];
	ft_string(str);
	cont = ft_strlen(str);
	return (free(str), cont);
}
