# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/19 03:36:26 by idouidi           #+#    #+#              #
#    Updated: 2022/07/08 21:00:24 by idouidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 		= main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp \
	   		  PresidentialPardonForm.cpp Intern.cpp
OBJS		= $(SRCS:.cpp=.o)
HEADER		= ./
CXX			=  c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g
NAME		= ex03

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