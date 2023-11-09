/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_uppercase.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 22:12:39 by victor            #+#    #+#             */
/*   Updated: 2023/11/09 00:11:38 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_hex_uppercase_recursive(unsigned int number)
{
	char	*hex_digits;
	int		count;

	count = 0;
	hex_digits = "0123456789ABCDEF";
	if (number >= 16)
	{
		count += print_hex_uppercase_recursive(number / 16);
		count += print_hex_uppercase_recursive(number % 16);
	}
	else
	{
		write(1, &hex_digits[number], 1);
		count = 1;
	}
	return (count);
}

int	ft_print_hex_uppercase(va_list args)
{
	unsigned int	number;
	int				count;

	count = 0;
	number = va_arg(args, unsigned int);
	count += print_hex_uppercase_recursive(number);
	return (count);
}
