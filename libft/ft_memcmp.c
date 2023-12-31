/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 09:19:47 by cqin              #+#    #+#             */
/*   Updated: 2022/11/23 17:07:21 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return ((int)(((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]));
		i++;
	}
	return (0);
}

/*int main(void)
{
	char s[] = "t\200";
	char s2[] = "t\0";

	 printf("%d\n",memcmp(s, s2, 2)) ;
	 printf("%d\n",ft_memcmp(s, s2, 2));
}*/
