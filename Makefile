NAME = Cub3D

CC = gcc
FLAGS = -Wall -Wextra -Werror

SRC = ./src/main.c \
	./src/get_data/map_init.c \
	./src/game_core/game.c \
	./src/utils/utils_1.c \
	./src/get_data/check_copies.c 

OBJ = $(SRC:.c=.o)

MINILIBX = ./src/minilibx

LIBFT_PATH = ./src/libft
LIBFT = $(LIBFT_PATH)/libft.a

all: $(NAME)

$(NAME): $(LIBFT) mlx
	@$(CC) $(FLAGS) $(SRC) $(LIBFT) -framework OpenGL -framework AppKit -L$(MINILIBX) -lmlx -o $(NAME)

$(LIBFT):
	@make -C $(LIBFT_PATH)

mlx:
	@make -C $(MINILIBX)

clean:
	@rm -f $(OBJ)
	@make clean -C $(LIBFT_PATH)
	@make clean -C $(MINILIBX)
	@clear

fclean:
	@rm -f $(OBJ)
	@rm -f $(NAME)
	@make fclean -C $(LIBFT_PATH)
	@make clean -C $(MINILIBX)
	@clear

re: fclean all

.PHONY: all clean fclean re