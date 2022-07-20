# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/08 19:10:12 by user42            #+#    #+#              #
#    Updated: 2022/07/20 16:12:46 by idouidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= main.cpp 
OBJS		= $(SRCS:.cpp=.o)
HEADER		= ./
CXX			=  c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g
NAME		= ex01

%.o			: %.cpp %.hpp
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
re : fclean all