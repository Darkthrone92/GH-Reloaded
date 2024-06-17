NAME = ft_display_file
SRC = ft_display_file.c
OBJ = $(SRC:.c=.o)
AR = ar rcs

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC)
	ar rc $(NAME) *.o

clean:
	rm -f ${OBJ}
fclean:	clean
	rm -f ${NAME}
	rm -f includes/*.*.gch

.PHONY: $(NAME) all clean fclean re
