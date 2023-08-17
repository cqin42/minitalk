/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:38:48 by cqin              #+#    #+#             */
/*   Updated: 2022/11/20 11:57:04 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*d;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	while (i < len && (start < ft_strlen(s) && s[start + i] != '\0'))
		i++;
	d = malloc(sizeof(char) * (i + 1));
	if (!d)
		return (NULL);
	while (j < i && start < ft_strlen(s))
	{
		d[j] = s[start];
		start++;
		j++;
	}
	d[j] = '\0';
	return (d);
}
