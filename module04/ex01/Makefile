# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/14 14:09:54 by skim              #+#    #+#              #
#    Updated: 2021/07/23 17:28:27 by skim             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CC = clang++
CFLAGS = -Wall -Werror -Wextra

SRCS = Animal.cpp Dog.cpp Cat.cpp Brain.cpp main.cpp

all : $(NAME)

$(NAME) :
	@$(CC) $(CFLAGS) -std=c++98 $(SRCS) -o $(NAME)

clean :
	@rm -rf $(NAME)

fclean : clean

re : fclean all
