/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 12:12:41 by cqin              #+#    #+#             */
/*   Updated: 2022/12/01 20:36:56 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!(lst == NULL || new == NULL))
	{
		new->next = *lst;
		*lst = new;
	}
}

/*int main(void)
{
	t_list *lst = ft_lstnew("salut");
	ft_lstadd_front(&lst,ft_lstnew("Maria"));

	while(lst != NULL)
	{
		printf("%s\n",(char *)lst->content);
		lst = lst->next;
	}
}*/
