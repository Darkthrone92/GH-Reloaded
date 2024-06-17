NAME = ft_display_file
SRC = ft_display_file.c
OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f ${OBJ}
fclean:	clean
	rm -f ${NAME}
re: fclean all

.PHONY: $(NAME) all clean fclean re
