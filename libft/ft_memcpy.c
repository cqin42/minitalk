/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:45:49 by cqin              #+#    #+#             */
/*   Updated: 2022/11/27 10:37:16 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dst;
	char	*s;

	i = 0;
	dst = (char *)dest;
	s = (char *)src;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		dst[i] = s[i];
		i++;
	}
	return (dst);
}

/*int main(void)
{
	char c[]="salut";
	char dest[] = "";
	memcpy(dest,c,4);
	printf("%s\n",dest);

	char ci[]="salut";
        char desti[] = "";
        ft_memcpy(desti,ci,4);
        printf("%s\n",desti);
}*/
