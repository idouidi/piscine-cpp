# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/07 16:19:58 by idouidi           #+#    #+#              #
#    Updated: 2022/07/07 16:39:11 by idouidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= main.cpp Animal.cpp Dog.cpp Cat.cpp
OBJS		= $(SRCS:.cpp=.o)
HEADER		= ./
CXX			=  c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g
NAME		= ex00

%.o			: %.cpp
	$(CXX) $(CXXFLAGS) -I $(HEADER) -o $@ -c $<

$(NAME)		: $(OBJS)
	$(CXX) $(CXXFLAGS) -I $(HEADER) -o $(NAME) $(OBJS)

all			: $(NAME)

clean		:
	rm -rf $(OBJS)

fclean		: clean
	rm -rf $(NAME)

re			: fclean all

.PHONY: all clean fclean re