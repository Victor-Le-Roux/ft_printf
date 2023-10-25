/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vle-roux <vle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 23:20:30 by vle-roux          #+#    #+#             */
/*   Updated: 2023/10/19 06:19:57 by vle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	number;
	int	minus;

	minus = 0;
	number = 0;
	while (*nptr == ' ' || *nptr == '\n'
		||*nptr == '\t' || *nptr == '\v'
		|| *nptr == '\f' || *nptr == '\r')
		nptr++;
	if (*nptr == '-')
	{
		minus = 1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9' )
	{
		number = number * 10;
		number += *nptr - '0';
		nptr++;
	}
	if (minus == 1)
		number = -number;
	return (number);
}
