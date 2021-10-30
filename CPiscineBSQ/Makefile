# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hspengle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/06 10:07:07 by hspengle          #+#    #+#              #
#    Updated: 2020/10/06 11:20:12 by hspengle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRCS = bsq.c build_map.c count_array.c free_arrays.c main.c map_getters.c print_solution.c reader.c utils.c validations.c
OUTS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OUTS)
	$(CC) $(CFLAGS) $(OUTS) -o $(NAME)

$(OUTS): ft.h

clean:
	-rm -f $(OUTS)

fclean: clean
	-rm -f $(NAME)

re: fclean all
