/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:40:16 by cqin              #+#    #+#             */
/*   Updated: 2022/11/27 17:20:48 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;

	i = 0;
	if (!((unsigned char *)dest) && !((unsigned char *)src))
		return (NULL);
	if ((unsigned char *)dest > (unsigned char *)src)
	{
		while (n > i)
		{
			((unsigned char *)dest)[n - 1] = ((unsigned char *)src)[n - 1];
			n--;
		}
	}
	else
	{
		while (n > i)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
/*int main (void)
{
	char dest[] = "bb";
	char str[] = "start plop";
	memmove(dest+4,str,2);
	printf("%s\n",str);
	
	char d[] = "bb";
	char str1[] = "start plop";
        ft_memmove(d+4,str1,2);
        printf("%s\n",str1);
}*/
