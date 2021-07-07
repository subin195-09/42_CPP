# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skim <skim@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/07 15:40:14 by skim              #+#    #+#              #
#    Updated: 2021/07/07 15:41:39 by skim             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

CC = clang++
CFLAGS = -Wall -Werror -Wextra

SRCS = Account.cpp tests.cpp

all : $(NAME)

$(NAME) : 
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean :
	@rm -rf $(NAME)

fclean : clean

re : fclean all