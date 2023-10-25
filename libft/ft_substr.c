/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vle-roux <vle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 21:18:36 by vle-roux          #+#    #+#             */
/*   Updated: 2023/10/19 04:42:07 by vle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*copy;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	s_len -= start;
	if (s_len < len)
		len = s_len;
	copy = (char *) malloc(len + 1);
	if (copy)
	{
		ft_memcpy(copy, s + start, len);
		copy[len] = '\0';
	}
	return (copy);
}
