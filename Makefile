# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cqin <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/30 17:27:44 by cqin              #+#    #+#              #
#    Updated: 2023/02/05 15:23:40 by cqin             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = server

NAME_C = client

SRC_SV = server.c

SRC_C = client.c

BONUS_NAME_SV = server_bonus

BONUS_NAME_C = client_bonus

BONUS_SV = server_bonus.c

BONUS_C = client_bonus.c

CC = gcc -W -W -W

RM = rm -f

LIBFT_PATH = ./libft

LIBFT = $(LIBFT_PATH)/libft.a

all : $(LIBFT) $(NAME) $(NAME_C) 

$(LIBFT) :
	make -C $(LIBFT_PATH)
	ar rcs $(LIBFT)

bonus : $(LIBFT)
	$(CC) -o $(BONUS_NAME_SV) $(BONUS_SV) $(LIBFT)
	$(CC) -o $(BONUS_NAME_C) $(BONUS_C) $(LIBFT)

$(NAME) : $(LIBFT)
	$(CC) -o $(NAME) $(SRC_SV) $(LIBFT)

$(NAME_C) : $(LIBFT)
	$(CC) -o $(NAME_C) $(SRC_C) $(LIBFT)

clean :
	make clean -C $(LIBFT_PATH)
	$(RM) $(NAME) $(NAME_C) $(BONUS_NAME_SV) $(BONUS_NAME_C)

fclean : clean
	make fclean -C $(LIBFT_PATH)
	$(RM) $(NAME) $(NAME_C) $(BONUS_NAME_SV) $(BONUS_NAME_C)

re : fclean all

.PHONY : all clean fclean re
