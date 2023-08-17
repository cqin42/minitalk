/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_pointer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:48:45 by cqin              #+#    #+#             */
/*   Updated: 2022/12/08 13:25:04 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	prefixe(char *s)
{
	int	i;

	i = type_string(s);
	return (i);
}

int	type_pointer(void *p)
{
	char	*d;
	int		len;

	if (p == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	len = prefixe("0x");
	d = find_base((unsigned long)p, "0123456789abcdef");
	len = len + type_string(d);
	free(d);
	return (len);
}
