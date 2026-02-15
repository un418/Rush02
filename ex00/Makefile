# https://medium.com/@ayogun/makefile-basics-beginner-intermediate-c92377542c2c
#
# To run the program :
# make fclean
# make
#

SHELL = /bin/sh

SRC = main.c ourheader.c
NAME = rush-02

all: $(NAME)

$(NAME):
	gcc -Wextra -Werror -Wall $(SRC) -o $(NAME)

clean:


fclean: clean
	rm -f $(NAME)
	