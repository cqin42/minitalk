/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:50:24 by cqin              #+#    #+#             */
/*   Updated: 2022/11/23 16:12:25 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((str1[i] == str2[i] && i < n - 1)
		&& (str1[i] != '\0' || str2[i] != '\0'))
		i++;
	return ((int)(str1[i] - str2[i]));
}

/*int main(void)
{

	const char *i = "test\200";
	const char *j = "test\0";
	printf("%d\n",ft_strncmp(i, j, 6));
	printf("%d",strncmp(i,j, 6));
}*/
