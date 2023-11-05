/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vle-roux <vle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 03:03:20 by vle-roux          #+#    #+#             */
/*   Updated: 2023/11/05 23:32:49 by vle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include "ft_printf.h"

int	check_flags(char verif_flag)
{
	if (verif_flag == 'c')
		return (0);
	if (verif_flag == 's')
		return (1);
	if (verif_flag == 'p')
		return (2);
	if (verif_flag == 'd')
		return (3);
	if (verif_flag == 'i')
		return (3);
	if (verif_flag == 'u')
		return (4);
	if (verif_flag == 'x')
		return (5);
	if (verif_flag == 'X')
		return (6);
	if (verif_flag == '%')
		return (7);
	return (NULL);
}
void execute_print_function(int flag, va_list args)
{
	static int	(*f[])(va_list) = {ft_print_char, ft_print_string,
		ft_print_pointer, ft_print_integer, ft_putnbr_unsigned,
		ft_print_hex_lowercase, ft_print_hex_uppercase, ft_print_percent};

	f[flag](args);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		flag;

	count = 0;
	va_start(args, format);

	while (*format++)
	{
		if (*format == '%')
		{
			format++;
			flag = check_flags(*format);
			if (flag != 0)
				execute_print_function(flag, args);
			else
			{
				ft_putchar('%');
				ft_putchar(*format);
				count += 2;
			}
		}
		else
		{
			ft_putchar(*format);
			count++;
		}
	}
	va_end(args);
	return (count);
}
