/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 03:03:20 by vle-roux          #+#    #+#             */
/*   Updated: 2023/11/05 13:00:32 by victor           ###   ########.fr       */
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
    if (flag == 1)
        ft_print_char(args);
    else if (flag == 2)
        ft_print_string(args);
	else if (flag == 3)
		ft_

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

int	main(void)
{
	ft_printf("%287469234897c");
	return (0);
}
