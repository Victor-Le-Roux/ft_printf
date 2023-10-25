/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vle-roux <vle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 22:24:03 by vle-roux          #+#    #+#             */
/*   Updated: 2023/10/19 22:57:48 by vle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **list, void (*del_fun)(void *))
{
	t_list	*current_node;
	t_list	*node;

	current_node = *list;
	while (current_node)
	{
		node = current_node;
		current_node = node->next;
		ft_lstdelone(node, del_fun);
	}
	*list = NULL;
}
