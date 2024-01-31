/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_lett.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:06:55 by kquispe           #+#    #+#             */
/*   Updated: 2024/01/12 14:17:08 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexa_ptr(unsigned long mem, size_t len, char *ta_hexa)
{
	int				res;
	int				cont;
	char			*str;

	cont = 0;
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
	if (ft_string(str) == -1)
		return (free(str), -1);
	cont = ft_strlen(str) + 2;
	return (free(str), cont);
}

int	ft_printf_ptr(void *ptr)
{
	unsigned long	add_ptr;
	unsigned long	temp;
	int				len;
	size_t			i;

	i = 1;
	add_ptr = (unsigned long)ptr;
	temp = add_ptr;
	while (temp / 16 != 0)
	{
		i++;
		temp /= 16;
	}
	len = ft_hexa_ptr(add_ptr, i, "0123456789abcdef");
	if (len < 0)
		return (-1);
	return (len);
}

int	ft_putchar(int c)
{
	if (write(1, &c, 1) < 0)
		return (-1);
	return (1);
}

int	ft_string(char *str)
{
	int	i;
	int	control;

	i = 0;
	control = 0;
	if (!str)
		return (ft_string("(null)"));
	while (str[i])
	{
		control = ft_putchar(str[i++]);
		if (control < 0)
			return (-1);
	}
	return (ft_strlen(str));
}

int	ft_hexa(unsigned int num, char *bas)
{
	unsigned int	temp;
	size_t			i;
	char			*str;
	int				cont;

	i = 1;
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
	if (ft_string(str) < 0)
		return (free(str), -1);
	cont = ft_strlen(str);
	return (free(str), cont);
}
