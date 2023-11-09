/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 22:26:20 by victor            #+#    #+#             */
/*   Updated: 2023/11/09 00:14:36 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	print_integer_recursive(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		ft_putchar('-');
		count++;
		n = -n;
	}
	if (n > 9)
	{
		count += print_integer_recursive(n / 10);
		count += print_integer_recursive(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
		count++;
	}
	return (count);
}

int	ft_print_integer(va_list args)
{
	int	n;
	int	count;

	count = 0;
	n = va_arg(args, int);
	count += print_integer_recursive(n);
	return (count);
}


