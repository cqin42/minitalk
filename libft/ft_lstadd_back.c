/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 14:39:15 by cqin              #+#    #+#             */
/*   Updated: 2022/11/27 18:43:28 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (lst)
	{
		if ((*lst) == NULL)
			(*lst) = new;
		else
		{
			tmp = ft_lstlast((*lst));
			tmp->next = new;
		}
	}
}
/*int main(void)
{
	t_list *lst = ft_lstnew("salut");
	ft_lstadd_back(&lst,ft_lstnew("toi"));
	while (lst != NULL)
	{
		printf("%s\n",(char *)lst->content);
		lst = lst->next;
	}
}*/
