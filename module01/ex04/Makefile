# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skim <skim@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/01 15:50:22 by skim              #+#    #+#              #
#    Updated: 2021/07/08 16:26:00 by skim             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed

CC = clang++
CFLAGS = -Wall -Werror -Wextra

SRCS = main.cpp
all : $(NAME)

$(NAME) :
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean :
	@rm -rf $(NAME)
	@rm -rf *.replace

fclean : clean

re : fclean all
