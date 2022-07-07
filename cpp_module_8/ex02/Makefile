# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 12:33:02 by user42            #+#    #+#              #
#    Updated: 2022/03/17 14:43:44 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp
@OBJS = $(SRCS:.cpp=.o)
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address
NAME = ex02

all: $(NAME)

$(NAME): $(@OBJS)
	clang++ ${CFLAGS} -o ${NAME} ${@OBJS}

clean:
	rm -rf $(@OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all