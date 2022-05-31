# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/17 11:31:36 by user42            #+#    #+#              #
#    Updated: 2022/05/31 12:40:04 by idouidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/main.cpp srcs/utils.cpp srcs/method.cpp srcs/cmd/add.cpp srcs/cmd/search.cpp
@OBJS = $(SRCS:.cpp=.o)
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address
NAME = PhoneBook

all: $(NAME)

$(NAME): $(@OBJS)
	clang++ ${CFLAGS} -o ${NAME} ${@OBJS}

clean:
	rm -rf $(@OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all