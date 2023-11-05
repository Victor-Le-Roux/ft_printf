/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vle-roux <vle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 03:03:20 by vle-roux          #+#    #+#             */
/*   Updated: 2023/11/05 03:39:27 by vle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_flags(char verif_flag)
{
	if (verif_flag == 'c')
		return (1);
	if (verif_flag == 's')
		return (2);
	if (verif_flag == 'p')
		return (3);
	if (verif_flag == 'd')
		return (4);
	if (verif_flag == 'i')
		return (5);
	if (verif_flag == 'u')
		return (6);
	if (verif_flag == 'x')
		return (7);
	if (verif_flag == 'X')
		return (8);
	if (verif_flag == '%')
		return (9);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	char	test[2];

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			while (check_flags(format[++i]) == 0)
			{
				printf("test");
			}
			test[0] = format[i];
			break ;
		}
		i++;
	}
	printf("%s",test);
	return 0;
}

int	main(void)
{
	ft_printf("%287469234897c");
	return (0);
}
