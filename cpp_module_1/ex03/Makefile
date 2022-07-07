# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/25 11:29:35 by user42            #+#    #+#              #
#    Updated: 2022/02/18 15:50:06 by idouidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS= main.cpp srcs/HumanA.cpp srcs/HumanB.cpp srcs/Weapon.cpp
@OBJS= $(SRCS:.cpp=.o)
INCS = -I./includes
CFLAGS= -Wall -Werror -Wextra -std=++98 -g -fsanitize=address
NAME= ex03

all: $(NAME)

$(NAME): $(@OBJS)
	clang++ $(CFLAGS) -o  $(NAME) $(@OBJS) $(INCS)

clean:
	rm -rf $(@OBJS)
fclean: clean
	rm -rf $(NAME)
re: fclean	all