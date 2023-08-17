/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 16:37:27 by cqin              #+#    #+#             */
/*   Updated: 2022/12/01 21:24:49 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*list;

	if (lst != NULL)
	{
		while (del != NULL && (*lst) != NULL)
		{
			del((*lst)->content);
			list = (*lst);
			(*lst) = list->next;
			free(list);
		}
		(*lst) = NULL;
	}
}
