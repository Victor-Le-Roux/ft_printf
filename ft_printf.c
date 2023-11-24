/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vle-roux <vle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 23:40:40 by victor            #+#    #+#             */
/*   Updated: 2023/11/24 18:31:00 by vle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static int	exec_conversion(char spec_ltr, va_list args)
{
	if (spec_ltr == '%')
		return (write(1, "%", 1));
	else if (spec_ltr == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		return (1);
	}
	else if (spec_ltr == 's')
		return (ft_print_string(va_arg(args, char *)));
	else if (spec_ltr == 'p')
		return (ft_print_pointer(va_arg(args, void *)));
	else if (spec_ltr == 'd' || spec_ltr == 'i')
		return (ft_print_int(va_arg(args, int)));
	else if (spec_ltr == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	else if (spec_ltr == 'x')
		return (ft_print_hexa(va_arg(args, ssize_t), false));
	else if (spec_ltr == 'X')
		return (ft_print_hexa(va_arg(args, ssize_t), true));
	return (0);
}

int	ft_printf(const char *__format, ...)
{
	int		i;
	int		len;
	va_list	args;

	if (!__format)
		return (0);
	i = 0;
	len = 0;
	va_start(args, __format);
	while (__format[i])
	{
		if (__format[i] == '%')
		{
			i++;
			len += exec_conversion(__format[i], args);
		}
		else
			len += write(1, &__format[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}
