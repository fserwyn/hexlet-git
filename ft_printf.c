/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fserwyn <fserwyn@student.21-school.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 19:01:40 by fserwyn           #+#    #+#             */
/*   Updated: 2021/01/06 19:12:30 by fserwyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_printf_c(char *c)
{
    ft_putchar_fd((char)c, 1);
}

void    ft_printf_s(char *str)
{
    ft_putstr_fd(str, 1);
}

int     ft_printf(const char *str, ...)
{
    int result;
    int i;
    va_list arg;

    result = 0;
    i = 0;
    va_start (arg, str);
    while (str[i] != '\0')
    {
        if (str[i] == '%' /* && str[i + 1] != '%' */)
        {
            if (str[i + 1] == 'c')
            {
                ft_printf_c(va_arg(arg, char *));
                i++;
            }
            if (str[i + 1] == 's')
            {
                ft_printf_s(va_arg(arg, char *));
                i++;
            }
        }
        else
            ft_putchar_fd(str[i], 1);
        i++;
    }
    va_end(arg);
    return (result);
}
