# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/17 11:31:36 by user42            #+#    #+#              #
#    Updated: 2022/03/08 19:48:34 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/main.cpp srcs/utils.cpp srcs/method.cpp srcs/cmd/add.cpp srcs/cmd/search.cpp
@OBJS = $(SRCS:.cpp=.o)
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address
NAME = smartphone

all: $(NAME)

$(NAME): $(@OBJS)
	clang++ ${CFLAGS} -o ${NAME} ${@OBJS}

clean:
	rm -rf $(@OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all