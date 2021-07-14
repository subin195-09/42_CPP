# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/14 14:09:54 by skim              #+#    #+#              #
#    Updated: 2021/07/14 14:10:17 by skim             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap

CC = clang++
CFLAGS = -Wall -Werror -Wextra

SRCS = ClapTrap.cpp main.cpp

all : $(NAME)

$(NAME) :
	@$(CC) $(CFLAGS) -std=c++98 $(SRCS) -o $(NAME)

clean :
	@rm -rf $(NAME)

fclean : clean

re : fclean all
