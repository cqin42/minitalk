/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:31:15 by cqin              #+#    #+#             */
/*   Updated: 2022/11/28 10:17:08 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len_start;

	if (size == 0)
		return (ft_strlen(src));
	i = ft_strlen(dst);
	j = 0;
	dst_len_start = ft_strlen(dst);
	if (i < size)
	{
		while (i < (size - 1) && src[j] != '\0')
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	if (ft_strlen(dst) > size)
		return (ft_strlen(src) + size);
	return (dst_len_start + ft_strlen(src));
}

/*int main(void)
{
	char dst[15] ;
	memset(dst,'r',14);
	printf("%ld\n",ft_strlcat(dst, "lorem ipsum dolor sit amet", 15));
	write(1, "\n", 1);
	write(1, dst, 15);
	write(1, "\n", 1);

	char dest[15] ;
	memset(dst,' ',0);
        printf("%ld\n",strlcat(dest, "a", 0));
        write(1, "\n", 1);
        write(1, dest, 15);
	write(1, "\n", 1);
}*/
