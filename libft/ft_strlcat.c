/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vle-roux <vle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 00:07:20 by vle-roux          #+#    #+#             */
/*   Updated: 2023/10/19 06:08:11 by vle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char		*dst_cpy;
	const char	*src_cpy;
	size_t		remaining;
	size_t		dest_len;

	dst_cpy = dest;
	src_cpy = src;
	remaining = size;
	while (remaining-- && *dst_cpy)
		dst_cpy++;
	dest_len = dst_cpy - dest;
	remaining = size - dest_len;
	if (!remaining)
		return (dest_len + ft_strlen(src_cpy));
	while (*src_cpy)
	{
		if (remaining != 1)
		{
			*dst_cpy++ = *src_cpy;
			--remaining;
		}
		src_cpy++;
	}
	*dst_cpy = '\0';
	return (dest_len + (src_cpy - src));
}
