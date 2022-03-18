# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/15 18:53:03 by user42            #+#    #+#              #
#    Updated: 2022/03/15 21:44:21 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp
@OBJS = $(SRCS:.cpp=.o)
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address
NAME = ex00

all: $(NAME)

$(NAME): $(@OBJS)
	clang++ ${CFLAGS} -o ${NAME} ${@OBJS}

clean:
	rm -rf $(@OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all