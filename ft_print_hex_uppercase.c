/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_uppercase.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 22:12:39 by victor            #+#    #+#             */
/*   Updated: 2023/11/04 22:20:16 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex_uppercase(unsigned int number)
{
	char	*hex_digits;

	hex_digits = "0123456789ABCDEF";
	if (number >= 16)
	{
		ft_print_hex_uppercase(number / 16);
		ft_print_hex_uppercase(number % 16);
	}
	else
	{
		write(1, &hex_digits[number], 1);
	}
}
