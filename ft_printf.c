/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 03:03:20 by vle-roux          #+#    #+#             */
/*   Updated: 2023/11/05 22:00:53 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_flags(char verif_flag)
{
	if (verif_flag == 'c')
		return (1);
	if (verif_flag == 's')
		return (2);
	if (verif_flag == 'p')
		return (3);
	if (verif_flag == 'd')
		return (4);
	if (verif_flag == 'i')
		return (5);
	if (verif_flag == 'u')
		return (6);
	if (verif_flag == 'x')
		return (7);
	if (verif_flag == 'X')
		return (8);
	if (verif_flag == '%')
		return (9);
	return (0);
}
void execute_print_function(int flag, va_list args) {
    if (flag == 1) {
        char c = (char)va_arg(args, int); // chars are promoted to int when passed through '...'
        ft_print_char(c);
    } else if (flag == 2) {
        char *str = va_arg(args, char *);
        ft_print_string(str);
    } else if (flag == 3) {
        void *ptr = va_arg(args, void *);
        ft_print_pointer(ptr);
    } else if (flag == 4 || flag == 5) {
        int num = va_arg(args, int);
        ft_print_integer(num);
    } else if (flag == 6) {
        unsigned int unum = va_arg(args, unsigned int);
        ft_putnbr_unsigned(unum);
    } else if (flag == 7) {
        unsigned int hexnum = va_arg(args, unsigned int);
        ft_print_hex_lowercase(hexnum);
    } else if (flag == 8) {
        unsigned int hexnum = va_arg(args, unsigned int);
        ft_print_hex_uppercase(hexnum);
    } else if (flag == 9) {
        ft_print_percent();
    }
}


int ft_printf(const char *format, ...) {
    va_list args;
    int count = 0;

    va_start(args, format);

    while (*format) {
        if (*format == '%') {
            format++;
            int flag = check_flags(*format);
            if (flag != 0) {
                execute_print_function(flag, args);
            } else {
                ft_putchar('%');
                ft_putchar(*format);
                count += 2;
            }
        } else {
            ft_putchar(*format);
            count++;
        }
        format++;
    }

    va_end(args);
    return count;
}

int main(void) {
    // Test character printing
    ft_printf("Character: %c\n", 'A');

    // Test string printing
    ft_printf("String: %s\n", "Hello, World!");

    // Test pointer address printing
    int x = 42;
    ft_printf("Pointer: %p\n", (void *)&x);

    // Test decimal/int printing
    ft_printf("Decimal: %d\n", 12345);
    ft_printf("Integer: %i\n", -12345);

    // Test unsigned int printing
    ft_printf("Unsigned: %u\n", 12345);

    // Test hexadecimal printing (lowercase and uppercase)
    ft_printf("Hex (lowercase): %x\n", 0xabcdef);
    ft_printf("Hex (uppercase): %X\n", 0xabcdef);

    // Test percent sign printing
    ft_printf("Percent: %%\n");

    return 0;
}
