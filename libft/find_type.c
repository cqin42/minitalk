/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_type.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 13:26:50 by cqin              #+#    #+#             */
/*   Updated: 2023/01/24 11:47:35 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	find_type(va_list ap, char c)
{
	int	i;

	i = 0;
	if (c == 'c')
		i = type_char(va_arg(ap, int));
	if (c == 's')
		i = type_string(va_arg(ap, char *));
	if (c == '%')
		i = type_pourcent(c);
	if (c == 'p')
		i = type_pointer(va_arg(ap, void *));
	if (c == 'd' || c == 'i')
		i = type_decimal(va_arg(ap, unsigned int));
	if (c == 'u')
		i = type_unsigned_decimal(va_arg(ap, unsigned int));
	if (c == 'x')
		i = type_hexadecimal(va_arg(ap, unsigned int));
	if (c == 'X')
		i = type_upper_hexadecimal(va_arg(ap, unsigned int));
	return (i);
}
