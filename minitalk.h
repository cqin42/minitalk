/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:29:09 by cqin              #+#    #+#             */
/*   Updated: 2023/02/05 14:15:10 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "libft/libft.h"
# include <sys/types.h>
# include <signal.h>

/*Client*/
void	handler_client(int sig);
void	send_msg(int pid, char msg);
int		verif(int argc, char *argv);

/*Server*/
char	*ft_charjoin(char *str, char c);
char	receive_bit(int sig, char c, int bit);
void	handler_server(int sig, siginfo_t *info, void *ucontext);
#endif
