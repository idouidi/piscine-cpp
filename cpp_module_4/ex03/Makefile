# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/07 10:23:48 by user42            #+#    #+#              #
#    Updated: 2022/07/07 22:49:53 by idouidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
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