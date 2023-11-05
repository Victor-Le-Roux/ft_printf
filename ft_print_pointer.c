/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 22:44:39 by victor            #+#    #+#             */
/*   Updated: 2023/11/04 23:13:34 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s)
{
	while (*s)
		ft_putchar(*s++);
}

void ft_puthex_ptr(unsigned long ptr) {
    char *hex_digits = "0123456789abcdef";
    if (ptr >= 16) {
        ft_puthex_ptr(ptr / 16);
        ft_puthex_ptr(ptr % 16);
    } else {
        ft_putchar(hex_digits[ptr]);
    }
}

void ft_print_pointer(void *ptr)
{
	ft_putstr("0x");
	ft_puthex_ptr((unsigned long)ptr);
}
