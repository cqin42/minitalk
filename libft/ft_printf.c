/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:57:18 by cqin              #+#    #+#             */
/*   Updated: 2022/12/08 13:28:15 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		len;
	int		i;

	len = 0;
	i = 0;
	if (! s[i])
		return (len);
	va_start(ap, s);
	while (s[i] != '\0')
	{
		if (s[i] != '%')
		{
			ft_putchar_fd(s[i], 1);
			len++;
		}
		else if (s[i] == '%')
		{
			i++;
			len = len + find_type(ap, s[i]);
		}
		i++;
	}
	va_end(ap);
	return (len);
}
/*int main (void)
{
	char *s = NULL;
	ft_printf("NULL %s NULL ", s);
	printf("NULL %s NULL ", s);
	//printf("%d\n",ft_printf("%s %s %s %s %s \n", " - ", "", "4", "", "2 "));
	//printf("%d\n",printf("NULL %s NULL ", (char *)NULL));
}*/
