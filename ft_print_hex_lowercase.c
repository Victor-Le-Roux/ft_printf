/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_lowercase.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:25:20 by victor            #+#    #+#             */
/*   Updated: 2023/11/09 00:11:57 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_hex_lowercase_recursive(unsigned int number)
{
	char	*hex_digits;
	int		count;

	count = 0;
	hex_digits = "0123456789abcdef";
	if (number >= 16)
	{
		count += print_hex_lowercase_recursive(number / 16);
		count += print_hex_lowercase_recursive(number % 16);
	}
	else
	{
		write(1, &hex_digits[number], 1);
		count = 1;
	}
	return (count);
}

int	ft_print_hex_lowercase(va_list args)
{
	unsigned int	number;
	int				count;

	count = 0;
	number = va_arg(args, unsigned int);
	count += print_hex_lowercase_recursive(number);
	return (count);
}



