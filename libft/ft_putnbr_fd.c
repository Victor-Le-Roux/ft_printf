/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vle-roux <vle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 03:18:14 by victor            #+#    #+#             */
/*   Updated: 2023/10/19 06:11:29 by vle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	_ft_putnbr_fd(unsigned int n, int fd)
{
	if (n > 9)
		_ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd('0' + n % 10, fd);
}

void	ft_putnbr_fd(signed int _n, int fd)
{
	long	n;

	n = _n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	_ft_putnbr_fd(n, fd);
}
