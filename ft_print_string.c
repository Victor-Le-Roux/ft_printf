/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:51:49 by victor            #+#    #+#             */
/*   Updated: 2023/11/04 20:52:31 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_print_string(va_list *args)
{
    char *str;
    int i;

    str = va_arg(*args, char *);
    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar_fd(str[i], 1);
        i++;
    }
}

/*
 * This function will be called by the ft_printf function when the %s format
 * specifier is encountered. It uses the ft_putchar_fd function from the libft
 * to print each character of the string to the standard output.
 */
