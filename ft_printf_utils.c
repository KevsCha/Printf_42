/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:20:29 by kquispe           #+#    #+#             */
/*   Updated: 2023/12/27 21:55:58 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}
void	*ft_calloc(size_t num, size_t bit)
{
	char	*arr;
	size_t	i;

	arr = (char *)malloc(num * bit);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < num * bit)
		arr[i++] = '\0';
	return (arr);
}