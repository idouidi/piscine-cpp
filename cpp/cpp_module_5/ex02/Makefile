# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idouidi <idouidi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/19 03:36:26 by idouidi           #+#    #+#              #
#    Updated: 2022/02/23 02:03:15 by idouidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp \
	   PresidentialPardonForm.cpp
@OBJS = $(SRCS:.cpp=.o)
CFLAGS = -Wall -Wextra -Werror -std=++98 -g -fsanitize=address -Wshadow -Wno-shado
NAME = ex02

all : $(NAME)

$(NAME): $(@OBJS)
	clang++ $(CFLAGS) -o $(NAME) $(@OBJS)

clean:
	rm -rf $(@OBJS)
fclean: clean
	rm -rf $(NAME)
re : fclean all