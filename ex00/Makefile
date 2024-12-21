# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/21 05:17:42 by ahraich           #+#    #+#              #
#    Updated: 2024/12/21 16:38:39 by ahraich          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC  = main.cpp ClapTrap.cpp

OBJ = $(SRC:.cpp=.o)

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ClapTrap

CPP = c++

REMOVE = rm -rf


all : ${NAME}

${NAME}: ${OBJ} ClapTrap.h
	${CPP} ${OBJ} ${CPPFLAGS} -o ${NAME}

clean:
	${REMOVE} ${OBJ}

fclean: clean
	${REMOVE} ${NAME}

re: fclean all

.PHONY: all clean fclean re