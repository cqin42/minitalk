/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:32:46 by cqin              #+#    #+#             */
/*   Updated: 2022/11/27 10:25:48 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*d;
	size_t	first;
	size_t	last;
	size_t	i;

	first = 0;
	i = 0;
	if (!s1)
		return (NULL);
	last = ft_strlen(s1);
	while (s1[first] != '\0' && (ft_strchr(set, s1[first]) != NULL))
		first++;
	while (last > first && (ft_strrchr(set, s1[last - 1]) != NULL))
		last--;
	d = (char *)malloc((sizeof(char)) *(last - first + 1));
	if (d == 0)
		return (NULL);
	while (first + i < last)
	{
		d[i] = s1[first + i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
