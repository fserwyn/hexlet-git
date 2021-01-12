/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anton <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 13:49:40 by anton             #+#    #+#             */
/*   Updated: 2021/01/09 13:54:21 by anton            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"
//# include <stdio.h>

int		main(void)
{
	char *arr;
	char c = 'Z';
	arr = "AAA";
	printf("Hello %s world %c Liana\n\n", arr, c);
	ft_printf("Hello %s world %c Liana\n", arr, c);
	return (0);	
}

