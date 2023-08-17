/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:22:23 by cqin              #+#    #+#             */
/*   Updated: 2022/11/16 14:34:46 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
/*int main(void)
{
        char str[5] = "salut";
        bzero(str+3,2);
	printf("%s\n",str);

        char s[5] = "salut";
        ft_bzero(s+3,2);
	printf("%s\n",s);
}*/
