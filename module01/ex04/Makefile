# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/01 15:50:22 by skim              #+#    #+#              #
#    Updated: 2021/07/29 14:45:12 by skim             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed

CC = clang++
CFLAGS = -Wall -Werror -Wextra

SRCS = main.cpp
all : $(NAME)

$(NAME) :
	@$(CC) $(CFLAGS) -std=c++98 $(SRCS) -o $(NAME)

clean :
	@rm -rf $(NAME)
	@rm -rf *.replace

fclean : clean

re : fclean all
