/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 13:51:57 by cqin              #+#    #+#             */
/*   Updated: 2022/12/01 20:42:41 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

/*int main(void)
{
	t_list *lst = ft_lstnew("salut");
	ft_lstadd_front(&lst,ft_lstnew("MARIA"));
	printf("%d\n",ft_lstsize(lst));
}*/
