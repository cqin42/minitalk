/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:31:37 by cqin              #+#    #+#             */
/*   Updated: 2022/12/08 13:20:48 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_len(unsigned long long nb, char *base)
{
	unsigned long long	base_len;
	int					len;

	len = 0;
	base_len = ft_strlen(base);
	while (nb >= base_len)
	{
		nb = nb / base_len;
		len++;
	}
	return (len + 1);
}

char	*find_base(unsigned long long nb, char *base)
{
	char	*d;
	int		len;
	int		base_len;

	len = ft_len(nb, base);
	base_len = ft_strlen(base);
	d = (char *)malloc(sizeof(char) * (len + 1));
	if (!d)
		return (NULL);
	d[len] = '\0';
	while (len)
	{
		len --;
		d[len] = base[nb % base_len];
		nb = nb / base_len;
	}
	return (d);
}
