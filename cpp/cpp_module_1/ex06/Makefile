# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 22:06:04 by user42            #+#    #+#              #
#    Updated: 2022/02/18 15:50:37 by idouidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp Karen.cpp
@OBJS = $(SRCS:.cpp=.o)
CFLAGS = -Wall -Wextra -Werror -std=++98  -g -fsanitize=address
NAME = ex06

all : $(NAME)

$(NAME) : $(@OBJS)
	clang++ $(CFLAGS) -o $(NAME) $(@OBJS)

clean:
	rm -rf $(@OBJS)
fclean: clean
	rm -rf $(NAME)
re: fclean all