/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:01:13 by cqin              #+#    #+#             */
/*   Updated: 2022/11/20 16:11:37 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <limits.h>

static int	ft_len(long int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = nb * (-1);
		i++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	len;
	long	nb;
	char	*d;

	nb = n;
	len = ft_len(nb);
	d = malloc(sizeof(char) * (len + 1));
	if (!d)
		return (NULL);
	d[len] = '\0';
	len--;
	if (nb == 0)
		d[0] = 48;
	if (nb < 0)
	{
		d[0] = '-';
		nb = nb * (-1);
	}
	while (nb > 0)
	{
		d[len] = nb % 10 + 48;
		nb = nb / 10 ;
		len--;
	}
	return (d);
}

/*int main(void)
{
	printf("%s\n",ft_itoa(INT_MAX));
}*/
