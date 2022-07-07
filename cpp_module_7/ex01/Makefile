# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/08 19:10:12 by user42            #+#    #+#              #
#    Updated: 2022/03/08 20:37:51 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp 
@OBJS = $(SRCS:.cpp=.o)
INC = ./ 
CFLAGS = -Wall -Wextra -Werror -std=++98 -g -fsanitize=address -Wshadow -Wno-shado
NAME = ex01

all : $(NAME)

$(NAME): $(@OBJS)
	clang++ $(CFLAGS) -I $(INC) -o $(NAME) $(@OBJS)

clean:
	rm -rf $(@OBJS)
fclean: clean
	rm -rf $(NAME)
re : fclean all