/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:02:30 by kquispe           #+#    #+#             */
/*   Updated: 2024/01/08 14:54:24 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int main(void)
{
	//unsigned int temp1 = 2147483648 + 2147483647;
	//int temp2 = 4366;
	//int i = 21474;
	//char *ms = "";
	//printf("[original] %%u: %u %d\n", temp1, temp2);
	//ft_printf("[copia] %%u %u %d\n", temp1, temp2);

	//printf("lett cont copia: %d\n", ft_printf("\001\002\007\v\010\f\r\n"));
    //printf("[printf original] %p\n", &temp2);
	//printf("lett cont original: %d", printf("\001\002\007\v\010\f\r\n"));
	//printf("%d", printf("%s", (char *)NULL));
	printf("\n%d\n", ft_printf("%p", ""));
	printf("%p", "");
	return (0);
}
