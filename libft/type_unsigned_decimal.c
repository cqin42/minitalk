/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_unsigned_decimal.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:27:32 by cqin              #+#    #+#             */
/*   Updated: 2022/12/08 13:16:58 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	type_unsigned_decimal(unsigned int nb)
{
	char	*d;
	int		len;

	d = find_base(nb, "0123456789");
	len = type_string(d);
	free(d);
	return (len);
}
