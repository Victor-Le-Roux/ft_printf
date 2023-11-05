/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_lowercase.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:25:20 by victor            #+#    #+#             */
/*   Updated: 2023/11/05 21:48:14 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex_lowercase(unsigned int number)
{
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	if (number >= 16)
	{
		ft_print_hex_lowercase(number / 16);
		ft_print_hex_lowercase(number % 16);
	}
	else
	{
		write(1, &hex_digits[number], 1);
	}
}
