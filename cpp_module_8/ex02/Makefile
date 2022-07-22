# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 12:33:02 by user42            #+#    #+#              #
#    Updated: 2022/07/22 23:29:26 by idouidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= main.cpp
OBJS		= $(SRCS:.cpp=.o)
CXX			=  c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g
INCLUDES 	= $(shell find . -type f -name "*.hpp" | cut -c 3-)
NAME		= ex02


%.o			: %.cpp $(INCLUDES)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME)		: $(OBJS) $(INCLUDES)
	$(CXX) $(CXXFLAGS)  -o $(NAME) $(OBJS)

all			: $(NAME)

clean		:
	rm -rf $(OBJS)

fclean		: clean
	rm -rf $(NAME)

re			: fclean all

.PHONY: all clean fclean re