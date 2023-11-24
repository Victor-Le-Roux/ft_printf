/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vle-roux <vle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:31:38 by vle-roux          #+#    #+#             */
/*   Updated: 2023/11/24 18:31:40 by vle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	p_digits(unsigned long long n)
{
	size_t	digits;

	digits = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		digits += 1;
		n /= 16;
	}
	return (digits);
}

static void	put_ptr(unsigned long long addr)
{
	static char	digits[] = "0123456789abcdef";

	if (addr >= 16)
		put_ptr(addr / 16);
	write(STDOUT_FILENO, &digits[addr % 16], 1);
}

int	ft_print_pointer(void *addr)
{
	if (addr == NULL)
		return (write(STDOUT_FILENO, "(nil)", 5));
	write(STDOUT_FILENO, "0x", 2);
	put_ptr((unsigned long long)addr);
	return (p_digits((unsigned long long)addr) + 2);
}
