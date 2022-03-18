# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/20 20:36:58 by user42            #+#    #+#              #
#    Updated: 2022/01/21 17:37:36 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = Account.cpp tests.cpp
@OBJS = $(SRCS:.cpp=.o)
INC = -I/include
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address
NAME = GlobalBanksters

all: $(NAME)

$(NAME): $(@OBJS)
	clang++ ${CFLAGS} -o ${NAME} ${@OBJS} $(INC)

clean:
	rm -rf $(@OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all