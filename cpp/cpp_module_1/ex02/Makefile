# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/22 15:50:04 by user42            #+#    #+#              #
#    Updated: 2022/02/18 15:49:55 by idouidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS= main.cpp
@OBJS= $(SRCS:.cpp=.o)
CFLAGS= -Wall -Werror -Wextra -std=++98 -g -fsanitize=address
NAME= ex02

all: $(NAME)

$(NAME): $(@OBJS)
	clang++ $(CFLAGS) -o  $(NAME) $(@OBJS)

clean:
	rm -rf $(@OBJS)
fclean: clean
	rm -rf $(NAME)
re: fclean	all