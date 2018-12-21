NAME = libft.a

SRC = ./*.c

OBJ = ./*.o

FLAG = -Wall -Wextra -Werror -I. -c

HDR = ./*h

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

$(OBJ): $(SRC)
	@gcc $(FLAG) $(SRC)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
