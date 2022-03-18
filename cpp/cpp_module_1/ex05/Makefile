# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 19:11:15 by user42            #+#    #+#              #
#    Updated: 2022/02/18 15:50:26 by idouidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp karen.cpp
@OBJS = $(SRCS:.cpp=.o)
CFLAGS= -Wall -Werror -Wextra -std=++98 -g -fsanitize=address
NAME = ex05

all: $(NAME)

$(NAME): $(@OBJS)
	clang++ $(CFLAGS) -o $(NAME) $(@OBJS)

clean:
	rm -rf $(@OBJS)
fclean: clean
	rm -rf $(NAME)
re: fclean all