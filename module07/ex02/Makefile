# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/31 20:46:11 by skim              #+#    #+#              #
#    Updated: 2021/08/01 19:08:45 by skim             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = array

CC = clang++
CFLAGS = -Wall -Werror -Wextra

SRCS = main.cpp

all : $(NAME)

$(NAME) :
	@$(CC) $(CFLAGS) -std=c++98 $(SRCS) -o $(NAME)

clean :
	@rm -rf $(NAME)

fclean : clean

re : fclean all
