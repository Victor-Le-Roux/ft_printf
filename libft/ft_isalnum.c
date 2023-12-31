/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vle-roux <vle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:38:15 by vle-roux          #+#    #+#             */
/*   Updated: 2023/10/18 20:54:15 by vle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int ft_var)
{
	return (((ft_var >= 'a') && (ft_var <= 'z'))
		|| ((ft_var >= 'A') && (ft_var <= 'Z'))
		|| ((ft_var >= '0') && (ft_var <= '9')));
}
