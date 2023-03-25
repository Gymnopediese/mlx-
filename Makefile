# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albaud <albaud@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/17 18:46:11 by albaud            #+#    #+#              #
#    Updated: 2023/03/24 12:31:19 by albaud           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	= $(wildcard *.c) $(wildcard draw/*.c) $(wildcard canvas/*.c) $(wildcard pixel/*.c)
OBJS 	= ${SRCS:.c=.o}
NAME 	= libmlx++.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

.c.o 	:
		${CC} ${CFLAGS} -I /usr/X11/include -c $< -o ${<:.c=.o}
		
all 	: $(NAME)

$(NAME)	: ${OBJS}
		ar rcs ${NAME} ${OBJS}

clean	:
		rm -f ${OBJS}

fclean	:	clean
		rm -f ${NAME}

re		: fclean all

push	:
		git add *
		git commit -m save
		git push
