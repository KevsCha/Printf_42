/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uns_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 17:05:54 by kquispe           #+#    #+#             */
/*   Updated: 2024/01/02 15:57:13 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	ft_char(unsigned int num, int pos, int end_pos)
{
	int	div;

	div = 1;
	while (num / div > 9 && pos != end_pos)
	{
		div *= 10;
		pos++;
	}
	num = num / div;
	num %= 10;
	num += '0';
	return (num);
}

static unsigned long	len_str(unsigned int n)
{
	unsigned long	i;

	i = 0;
    if (n == 0)
        return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void	ft_uns_num(unsigned long n)
{
	char	*str;
	size_t	len;
	size_t	i;

	i = 0;
	len = len_str(n);
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return ;
	while (i < len)
	{
		str[i] = ft_char(n, i, len - 1);
		i++;
	}
	ft_string(str);
    free(str);
}