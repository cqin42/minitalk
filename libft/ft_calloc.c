/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 09:26:01 by cqin              #+#    #+#             */
/*   Updated: 2022/12/01 21:40:38 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dest;
	size_t	total;

	total = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (total / size != nmemb)
		return (NULL);
	dest = (void *)malloc(total);
	if (!dest)
		return (NULL);
	ft_bzero(dest, total);
	return ((void *)dest);
}

/*int main(void)
{
	size_t j = 0;
        size_t nb = 5;
        size_t *liste = NULL;

        liste = calloc(nb, sizeof(size_t));
        for(j = 0; j < nb; j++)
                printf("[%ld]",liste[j]);
make}*/
