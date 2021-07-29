# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/01 15:50:22 by skim              #+#    #+#              #
#    Updated: 2021/07/29 14:45:07 by skim             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = weapon

CC = clang++
CFLAGS = -Wall -Werror -Wextra

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

all : $(NAME)

$(NAME) :
	@$(CC) $(CFLAGS) -std=c++98 $(SRCS) -o $(NAME)

clean :
	@rm -rf $(NAME)

fclean : clean

re : fclean all
