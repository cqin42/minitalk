/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:13:30 by cqin              #+#    #+#             */
/*   Updated: 2022/11/16 13:48:29 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*int	main(void)
{
	printf("A :%d\n",ft_isalpha('A'));
	printf("K :%d\n",ft_isalpha('K'));
	printf("Z :%d\n",ft_isalpha('Z'));

	printf("a :%d\n",ft_isalpha('a'));
        printf("k :%d\n",ft_isalpha('k'));
        printf("z :%d\n",ft_isalpha('z'));

	printf("7 :%d\n",ft_isalpha('7'));
}*/
