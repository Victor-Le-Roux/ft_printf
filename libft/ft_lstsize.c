/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vle-roux <vle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 21:28:10 by vle-roux          #+#    #+#             */
/*   Updated: 2023/10/19 21:36:24 by vle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *list)
{
	t_list	**list_ptr;
	int		size;

	list_ptr = &list;
	size = 0;
	while (*list_ptr)
	{
		++size;
		list_ptr = &(*list_ptr)->next;
	}
	return (size);
}
