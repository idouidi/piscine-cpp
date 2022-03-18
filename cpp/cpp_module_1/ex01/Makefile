# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/22 14:03:42 by user42            #+#    #+#              #
#    Updated: 2022/02/18 15:49:43 by idouidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp Zombie.cpp ZombieHorde.cpp
@OBJS = $(SRCS:.cpp=.o)
CFLAGS = -Wall -Wextra -Werror -std=++98 -g -fsanitize=address
NAME = ex01

all: $(NAME)

$(NAME): $(@OBJS)
	clang++ $(CFLAGS) -o $(NAME) $(@OBJS)

clean:
	rm -rf $(@OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all