# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skim <skim@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/01 15:50:22 by skim              #+#    #+#              #
#    Updated: 2021/07/01 15:50:23 by skim             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = clang++
CFLAGS = -Wall -Werror -Wextra

SRCS = megaphone.cpp

all : $(NAME)

$(NAME) : 
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean :
	@rm -rf $(NAME)

fclean : clean

re : fclean all