/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_upper_hexadecimal.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:11:36 by cqin              #+#    #+#             */
/*   Updated: 2022/12/08 13:36:24 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	type_upper_hexadecimal(unsigned int value)
{
	int		len;
	char	*d;

	d = find_base(value, "0123456789ABCDEF");
	len = type_string(d);
	free (d);
	return (len);
}
