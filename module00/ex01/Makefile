# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skim <skim@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/01 16:51:43 by skim              #+#    #+#              #
#    Updated: 2021/07/08 19:17:23 by skim             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = clang++
CFLAGS = -Wall -Werror -Wextra

SRCS = phonebook.cpp phonebook_class.cpp

all : $(NAME)

$(NAME) : 
	@$(CC) $(CFLAGS) -std=c++98 $(SRCS) -o $(NAME)

clean :
	@rm -rf $(NAME)

fclean : clean

re : fclean all