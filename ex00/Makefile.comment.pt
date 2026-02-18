# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/15 20:31:18 by adaferna          #+#    #+#              #
#    Updated: 2026/02/15 20:34:28 by adaferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# https://medium.com/@ayogun/makefile-basics-beginner-intermediate-c92377542c2c
#
# To run the program :
# make fclean
# make
#

SHELL	= /bin/sh

NAME	= rush-02

CC		= cc
CFLAGS	= -Wall -Wextra -Werror

HEADER  = lib/ourheader.h


SRCS	=	main.c \
		lib/ft_arg.c \
		lib/ft_filesize.c \
		lib/ft_file_to_char.c \
		lib/ft_is_number.c \
		lib/ft_is_valid_number.c \
		lib/ft_strcpy.c \
		lib/ft_strlen.c \
		lib/ft_strncmp.c \
		lib/ft_write_result.c \
		lib/ft_free.c \
		lib/ft_read_dict.c
		
OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re