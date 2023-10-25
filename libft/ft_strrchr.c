/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vle-roux <vle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 01:21:27 by vle-roux          #+#    #+#             */
/*   Updated: 2023/10/19 01:24:58 by vle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;

	p = NULL;
	while (*s)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			p = s;
		++s;
	}
	if (*(unsigned char *)s == (unsigned char)c)
		p = s;
	return ((char *) p);
}
