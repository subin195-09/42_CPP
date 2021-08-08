# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/08 19:04:40 by skim              #+#    #+#              #
#    Updated: 2021/08/08 19:04:47 by skim             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CC = clang++
CFLAGS = -Wall -Werror -Wextra

SRCS =  main.cpp

all : $(NAME)

$(NAME) :
	@$(CC) $(CFLAGS) -std=c++98 $(SRCS) -o $(NAME)

clean :
	@rm -rf $(NAME)

fclean : clean

re : fclean all
