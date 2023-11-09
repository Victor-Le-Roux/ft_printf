/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 22:44:39 by victor            #+#    #+#             */
/*   Updated: 2023/11/09 00:26:33 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar_fds(char c, int fd)
{
	write(fd, &c, 1);
}

static int	ft_putstr_fds(char *s, int fd)
{
	int	count;

	count = 0;
	while (*s)
	{
		ft_putchar_fds(*s++, fd);
		count++;
	}
	return (count);
}

static int	ft_puthex_ptr_recursive(unsigned long ptr)
{
	char	*hex_digits;
	int		count;

	hex_digits = "0123456789abcdef";
	count = 0;
	if (ptr >= 16)
	{
		count += ft_puthex_ptr_recursive(ptr / 16);
		count += ft_puthex_ptr_recursive(ptr % 16);
	}
	else
	{
		ft_putchar_fds(hex_digits[ptr], 1);
		count = 1;
	}
	return (count);
}

int	ft_print_pointer(va_list args)
{
	void	*ptr;
	int		count;

	ptr = va_arg(args, void *);
	count = ft_putstr_fds("0x", 1);
	count += ft_puthex_ptr_recursive((unsigned long)ptr);
	return (count);
}

