/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:02:17 by cqin              #+#    #+#             */
/*   Updated: 2022/11/18 17:17:49 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <bsd/string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lensrc;
	char	*s;

	i = 0;
	lensrc = ft_strlen(src);
	s = (char *)src;
	if (size > 0)
	{
		while ((s[i] != '\0' && i < size - 1))
		{
			dst[i] = s[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (lensrc);
}
/*int main(void)
{
	char src[] = "salut";
	char dst[] = "";
	printf("%ld\n",ft_strlcpy(dst,src,5));
	printf("%s\n\n",dst);


	char src1[] = "salut";
        char dst1[] = "";
        printf("%ld\n",strlcpy(dst1,src1,5));
        printf("%s\n",dst1);

	char src3[] = "coucou";
	char dest3[10]; 
	memset(dest3, 'A', 10);
	ft_strlcpy(dest3, src3, 0);
	printf("%s\n",dest3);


	char s[] = "coucou";
        char d[10];
        memset(d, 'A', 10);
        strlcpy(d, s, 0);
        printf("%s\n",d);
}*/
