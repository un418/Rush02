# https://medium.com/@ayogun/makefile-basics-beginner-intermediate-c92377542c2c
#
# To run the program :
# make fclean
# make
#

SHELL = /bin/sh

SRC =	main.c \
		lib/ft_arg.c \
		lib/ft_filesize.c \
		lib/ft_file_to_char.c \
		lib/ft_is_number.c \
		lib/ft_is_valid_number.c \
		lib/ft_putstr.c \
		lib/ft_strcpy.c \
		lib/ft_strlen.c \
		lib/ft_strncmp.c \
		lib/ft_write_result.c

NAME = rush-02

all: $(NAME)

$(NAME):
	cc -g -Wextra -Werror -Wall $(SRC) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)
