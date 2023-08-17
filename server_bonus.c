/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:18:48 by cqin              #+#    #+#             */
/*   Updated: 2023/02/06 11:29:18 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

char	*ft_charjoin(char *str, char c)
{
	char	*dst;
	int		i;

	if (!str)
	{
		str = malloc(sizeof(char) * 1);
		if (!str)
			return (NULL);
		str[0] = '\0';
	}
	if (!c)
		return (NULL);
	dst = malloc(ft_strlen((char *)str) + sizeof(char) + 1);
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		dst[i] = str[i];
		i++;
	}
	dst[i++] = c;
	dst[i] = '\0';
	free(str);
	return (dst);
}

char	receive_bit(int sig, char c, int bit)
{
	if (sig == SIGUSR1)
	{
		c = c | 1;
		if (bit < 7)
			c = c << 1;
	}
	else if (sig == SIGUSR2)
	{
		c = c | 0;
		if (bit < 7)
			c = c << 1;
	}
	return (c);
}

void	handler_server(int sig, siginfo_t *info, void *ucontext)
{
	static char	c;
	static int	bit;
	static char	*msg;

	(void)ucontext;
	c = receive_bit(sig, c, bit);
	bit++;
	if (bit == 8)
	{
		if (c == '\0')
		{
			ft_printf("%s\n", msg);
			free(msg);
			msg = 0;
			if (kill(info->si_pid, SIGUSR2) == -1)
				return ((void) NULL);
		}
		msg = ft_charjoin(msg, c);
		c = 0;
		bit = 0;
	}
	if (kill(info->si_pid, SIGUSR1) == -1)
		return ((void) NULL);
}

int	main(int argc, char **argv)
{
	struct sigaction	sa;
	int					pid;

	(void)argv;
	sa.sa_sigaction = handler_server;
	sa.sa_flags = SA_SIGINFO;
	sigemptyset(&(sa.sa_mask));
	pid = getpid();
	ft_printf("%d\n", pid);
	if (sigaction(SIGUSR1, &sa, NULL) == -1)
		return (-1);
	if (sigaction(SIGUSR2, &sa, NULL) == -1)
		return (-1);
	while (argc == 1)
		pause();
}
