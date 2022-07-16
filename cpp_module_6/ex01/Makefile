# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/05 00:45:14 by idouidi           #+#    #+#              #
#    Updated: 2022/07/15 17:06:01 by idouidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 		= main.cpp Serial.cpp
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