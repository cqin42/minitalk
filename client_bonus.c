/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:46:16 by cqin              #+#    #+#             */
/*   Updated: 2023/02/05 14:18:27 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

int	g_control;

void	handler_client(int sig)
{
	if (sig == SIGUSR1)
		g_control = 1;
	else if (sig == SIGUSR2)
	{
		ft_printf("Message recu");
		exit(EXIT_SUCCESS);
	}
}

void	send_msg(int pid, char msg)
{
	int	bit;

	bit = 7;
	while (bit >= 0)
	{
		g_control = 0;
		if ((msg >> bit & 1) == 1)
		{
			if (kill(pid, SIGUSR1) == -1)
				return ((void) NULL);
		}
		else
			if (kill(pid, SIGUSR2) == -1)
				return ((void) NULL);
		bit--;
		while (g_control == 0)
			pause();
	}
}

int	verif(int argc, char *argv)
{
	int	i;

	i = 0;
	if (argc != 3)
	{
		ft_printf("Il faut 3 arguments :\n \t - ./client ");
		ft_printf("\t - PID du serveur \n \t - Message a afficher \n");
		return (0);
	}
	while (argv[i] && ft_isdigit(argv[i]) == 1)
		i++;
	if (argv[i] != '\0')
	{
		ft_printf("PID : Error\n");
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	i = 0;
	if (signal(SIGUSR1, &handler_client))
		return (-1);
	if (signal(SIGUSR2, &handler_client))
		return (-1);
	if (verif(argc, argv[1]) == 1)
	{
		pid = ft_atoi(argv[1]);
		if (argv[2] != NULL)
		{
			while (argv[2][i])
			{
				send_msg(pid, argv[2][i]);
				i++;
			}
			send_msg(pid, 0);
		}
	}
	return (0);
}
