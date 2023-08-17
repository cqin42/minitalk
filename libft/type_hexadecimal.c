/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_hexadecimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:42:32 by cqin              #+#    #+#             */
/*   Updated: 2022/12/08 13:37:46 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	type_hexadecimal(unsigned int value)
{
	int		len;
	char	*d;

	d = find_base(value, "0123456789abcdef");
	len = type_string(d);
	free (d);
	return (len);
}
