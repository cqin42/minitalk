/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:23:39 by cqin              #+#    #+#             */
/*   Updated: 2022/11/23 13:36:40 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (str[i] == (char )c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

/*int main(void)
{
	char str[] = "bonjourno";
	printf("%p\n",(char *)memchr(str,'n',2));

	char s[] = "bonjourno";
        printf("%s\n",(char *)ft_memchr(s,'n',2));
}*/
