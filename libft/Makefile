# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cqin <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/17 15:18:06 by cqin              #+#    #+#              #
#    Updated: 2023/01/24 11:46:26 by cqin             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

SRC =	ft_atoi.c \
	ft_isalnum.c \
	ft_isdigit.c \
	ft_memchr.c \
	ft_memset.c \
	ft_putnbr_fd.c \
	ft_strchr.c \
	ft_strjoin.c \
	ft_strncmp.c \
	ft_substr.c \
	ft_bzero.c \
	ft_isalpha.c \
	ft_isprint.c \
	ft_memcmp.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_strdup.c \
	ft_strlen.c \
	ft_strnstr.c \
	ft_tolower.c \
	ft_calloc.c \
	ft_isascii.c \
	ft_itoa.c \
	ft_memcpy.c \
	ft_putendl_fd.c \
	ft_split.c \
       	ft_striteri.c \
	ft_strtrim.c \
	ft_strmapi.c \
	ft_strrchr.c \
	ft_toupper.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	type_char.c \
	ft_printf.c \
	find_type.c \
	type_string.c \
	type_pourcent.c \
	type_pointer.c \
	type_decimal.c \
	type_unsigned_decimal.c \
	type_hexadecimal.c \
	type_upper_hexadecimal.c \
	find_base.c \

BONUS_SRC =	ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \

OBJ = $(SRC:.c=.o)

HEADER = libft.h

BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: ${NAME}


$(NAME): ${OBJ}
	ar rcs ${NAME} ${OBJ}

.c.o: 
	${CC} ${CFLAGS} -c $< -o $(<:.c=.o)


bonus: ${OBJ} ${BONUS_OBJ}
	ar rcs ${NAME} ${BONUS_OBJ} ${OBJ}


clean:
	${RM} ${OBJ} ${BONUS_OBJ}


fclean: clean
	${RM} ${NAME}


re: fclean all


.PHONY: all bonus clean fclean re
