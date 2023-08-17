/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:50:53 by cqin              #+#    #+#             */
/*   Updated: 2022/11/16 14:00:23 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int     main(void)
{
        printf("%d\n",ft_isascii('c'));
        printf("%d\n",isascii('c'));

	printf("%d\n",ft_isascii(1234));
        printf("%d\n",isascii(1234));
}*/
