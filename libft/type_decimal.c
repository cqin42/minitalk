/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_decimal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:15:21 by cqin              #+#    #+#             */
/*   Updated: 2022/12/08 13:13:48 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	type_decimal(int nb)
{
	char	*d;
	int		len;

	d = ft_itoa(nb);
	len = ft_strlen(d);
	type_string(d);
	free(d);
	return (len);
}
