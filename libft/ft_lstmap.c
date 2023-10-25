/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vle-roux <vle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 23:11:27 by vle-roux          #+#    #+#             */
/*   Updated: 2023/10/19 23:15:22 by vle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *list, void *(*f)(void *), void (*del_fun)(void *))
{
	t_list	*result_list;
	t_list	*node;

	result_list = NULL;
	while (list)
	{
		node = ft_lstnew(NULL);
		if (!node)
		{
			ft_lstclear(&result_list, del_fun);
			break ;
		}
		node->content = f(list->content);
		ft_lstadd_back(&result_list, node);
		list = list->next;
	}
	return (result_list);
}
