/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vle-roux <vle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:40:03 by vle-roux          #+#    #+#             */
/*   Updated: 2023/10/19 06:13:58 by vle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	sc;

	sc = count * size;
	if (sc == 0)
		return (malloc(0));
	ptr = malloc(sc);
	if (ptr)
		ft_bzero(ptr, sc);
	return (ptr);
}
