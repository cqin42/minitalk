/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:08:31 by cqin              #+#    #+#             */
/*   Updated: 2022/11/17 13:41:31 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int     main(void)
{
        printf("%d\n",ft_isprint('c'));
        printf("%d\n",isprint('c'));

	printf("%d\n",ft_isprint('\n'));
        printf("%d\n",isprint('\n'));
}*/
