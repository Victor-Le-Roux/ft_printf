/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:51:49 by victor            #+#    #+#             */
/*   Updated: 2023/11/08 23:34:46 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(va_list args)
{
	char	*str;
	int		count;

	str = va_arg(args, char *);
	count = 0;
	if (!str)
		str = "(null)";
	while (*str)
	{
		ft_putchar(*str++);
		count++;
	}
	return (count);
}
