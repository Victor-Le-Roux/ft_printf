/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vle-roux <vle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 01:48:49 by vle-roux          #+#    #+#             */
/*   Updated: 2023/10/19 01:52:44 by vle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*cpy;
	size_t	len;

	len = ft_strlen(str) + 1;
	cpy = malloc(len);
	if (cpy)
		ft_memcpy(cpy, str, len);
	return (cpy);
}
