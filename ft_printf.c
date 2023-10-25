/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vle-roux <vle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 03:03:20 by vle-roux          #+#    #+#             */
/*   Updated: 2023/10/25 04:25:05 by vle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if(str[i+1] == '%' && str[i] == '%')
			i++;
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}

int	main(void)
{
	ft_printf("Ceci est un exemple de pourcentage : %%\n");
	return (0);
}
