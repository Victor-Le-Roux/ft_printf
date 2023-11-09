/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 00:56:16 by victor            #+#    #+#             */
/*   Updated: 2023/11/09 00:27:59 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_unsigned_recursive(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
	{
		count += print_unsigned_recursive(n / 10);
		count += print_unsigned_recursive(n % 10);
	}
	else
	{
		ft_putchar_fd(n + '0', 1);
		count = 1;
	}
	return (count);
}

int	ft_putnbr_unsigned(va_list args)
{
	unsigned int	n;
	int				count;

	n = va_arg(args, unsigned int);
	count = 0;
	count += print_unsigned_recursive(n);
	return (count);
}
