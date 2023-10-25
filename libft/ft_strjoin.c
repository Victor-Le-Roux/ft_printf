/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vle-roux <vle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 03:25:03 by victor            #+#    #+#             */
/*   Updated: 2023/10/19 04:44:27 by vle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	str1length;
	size_t	str2length;
	char	*joined_string;

	str1length = ft_strlen(s1);
	str2length = ft_strlen(s2);
	joined_string = (char *) malloc(str1length + str2length + 1);
	if (joined_string)
	{
		ft_memcpy(joined_string, s1, str1length);
		ft_memcpy(joined_string + str1length, s2, str2length);
		joined_string[str1length + str2length] = '\0';
	}
	return (joined_string);
}
