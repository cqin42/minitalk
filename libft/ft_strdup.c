/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 09:55:01 by cqin              #+#    #+#             */
/*   Updated: 2022/11/20 10:29:08 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*d;
	size_t	size;

	size = ft_strlen(s);
	i = 0;
	d = (char *)malloc(sizeof(char) * (size + 1));
	if (d == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

/*int main(void)
{
	printf("%s\n",ft_strdup((char *)"coucou"));
        printf("%s",strdup((char *)"coucou"));
}*/
