/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:40:36 by cqin              #+#    #+#             */
/*   Updated: 2022/11/27 17:01:01 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *src, const char *search, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (search[i] == '\0')
		return ((char *)(src));
	if (n == 0)
		return (0);
	while (src[i] != '\0' && i < n)
	{
		j = 0;
		if (src[i] == search[j])
		{
			while (search[j] == src[i + j] && (i + j < n))
			{
				j++;
				if (search[j] == '\0')
					return ((char *)(&src[i]));
			}
		}
		i++;
	}
	return (NULL);
}
/*int main(void)
{
        const char string[] = "lorem ipsum dolor sit amet";
	const char string2[] = "dolor";
        printf("%s.\n",ft_strnstr(string,string2,16));

	const char str[] = "lorem ipsum dolor sit amet";
	const char str2[] = "dolor";
        printf("%s.\n ",strnstr(str,str2,16));
}*/
