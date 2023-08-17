/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:23:04 by cqin              #+#    #+#             */
/*   Updated: 2022/11/23 10:36:30 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i])
		i++;
	i--;
	if (c == '\0')
		return (&str[i + 1]);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}

/*int main(void)
{
	const char s[] = "salut toi";
	
	printf("%s\n",ft_strrchr(s,'\0'));
        printf("%s",strrchr(s,'\0'));
}*/
