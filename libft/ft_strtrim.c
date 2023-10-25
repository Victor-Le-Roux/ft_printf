/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vle-roux <vle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 22:33:55 by vle-roux          #+#    #+#             */
/*   Updated: 2023/10/19 05:24:02 by vle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	char	*trimmedresult;
	size_t	lenght;

	while (*str && ft_strchr(set, *str))
		++str;
	lenght = ft_strlen(str);
	while (*str && ft_strchr(set, str[lenght - 1]))
		--lenght;
	trimmedresult = malloc(lenght + 1);
	if (trimmedresult)
	{
		ft_memcpy(trimmedresult, str, lenght);
		trimmedresult[lenght] = '\0';
	}
	return (trimmedresult);
}
