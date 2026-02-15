# https://medium.com/@ayogun/makefile-basics-beginner-intermediate-c92377542c2c
#
# To run the program :
# make fclean
# make
#

SHELL = /bin/sh

NAME	= rush-02
CC		= cc
CFLAGS	= -Wall -Wextra -Werror

SRC =	main.c \
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


all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	
re: fclean all
