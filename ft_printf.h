/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:20:59 by kquispe           #+#    #+#             */
/*   Updated: 2023/12/27 21:58:56 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(char	const *str, ...);
int		ft_itoa(int n);
void	ft_putchar(int c);
void	ft_string(char *str);
void	ft_printf_ptr(void *ptr);
size_t	len_str(unsigned long n);
void	*ft_calloc(size_t num, size_t bit);

#endif