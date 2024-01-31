/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:20:59 by kquispe           #+#    #+#             */
/*   Updated: 2024/01/12 14:17:43 by kquispe          ###   ########.fr       */
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
int		ft_putchar(int c);
int		ft_string(char *str);
int		ft_printf_ptr(void *ptr);
int		ft_hexa(unsigned int num, char *bas);
//size_t	len_str(unsigned long n);
int		ft_uns_num(unsigned long n);
size_t	ft_strlen(char *str);
void	*ft_calloc(size_t num, size_t bit);

#endif